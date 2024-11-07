// Fill out your copyright notice in the Description page of Project Settings.


#include "Law_Controller.h"
#include "Engine/StaticMeshActor.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"

ALaw_Controller::ALaw_Controller()
{
}

void ALaw_Controller::SetupInputComponent()
{
	APlayerController::SetupInputComponent();

	//binding skills to actions
	InputComponent->BindAction("Teleport", EInputEvent::IE_Pressed, this, &ALaw_Controller::Teleport);
	InputComponent->BindAction("Shambles", EInputEvent::IE_Pressed, this, &ALaw_Controller::InitiateShambles);
	InputComponent->BindAction("Tact", EInputEvent::IE_Pressed, this, &ALaw_Controller::Tact);
}

//call teleporting to a location of a cursor
void ALaw_Controller::Teleport()
{
	if (LawPawn == nullptr) return;

	FVector Pos;
	FHitResult Hit;
	GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);

	Pos = Hit.ImpactPoint;

	UGameplayStatics::PlaySound2D(this, TeleportCue);
	LawPawn->Teleport(Pos);
}

//setup a delayed positiin swapping with an object under the cursor
void ALaw_Controller::InitiateShambles()
{
	if (LawPawn == nullptr) return;

	AActor* HitTarget;
	FHitResult Hit;

	GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);

	HitTarget = Hit.GetActor();

	if (HitTarget == nullptr || !HitTarget->ActorHasTag("Swappable")) return;

	UGameplayStatics::PlaySound2D(this,ShamblesCue);

	FTimerHandle Timer;
	FTimerDelegate Delegate;

	Delegate.BindUFunction(this, "PerformShambles", HitTarget);

	GetWorld()->GetTimerManager().SetTimer(Timer, Delegate, 0.9f, false);
}

//calling swapping in player pawn
void ALaw_Controller::PerformShambles(AActor* Act)
{
	LawPawn->Shambles(Act);
}

//leviating object under the cursor in the air and freezing it
void ALaw_Controller::Tact()
{
	AActor* HitTarget;
	FHitResult Hit;

	GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);

	HitTarget = Hit.GetActor();

	if (HitTarget == nullptr || !HitTarget->ActorHasTag("Tactable")) return;


	//leviating the object up by 300 points
	FVector LevitatedPos = HitTarget->GetActorLocation();
	LevitatedPos.Z += 300;

	HitTarget->SetActorLocation(LevitatedPos);

	UGameplayStatics::PlaySound2D(this, TactCue);

	FTimerHandle Timer;
	FTimerDelegate Delegate;

	//freezing object's movement till it is thrown
	AStaticMeshActor* MeshActor = (AStaticMeshActor*)HitTarget;

	MeshActor->GetComponentByClass<UStaticMeshComponent>()->SetSimulatePhysics(false);

	//make levitated object rotate till it is thrown
	Delegate.BindUFunction(this, "RotateActor", HitTarget);
	GetWorld()->GetTimerManager().SetTimer(Timer, Delegate, 0.01f, true);

	BindThrow(HitTarget, Timer);
}

//bind and action to throw levitated object
void ALaw_Controller::BindThrow(AActor* Act, FTimerHandle TimerHandler)
{
	FInputActionHandlerSignature ActionHandler;

	FInputActionBinding* Action = new FInputActionBinding("ThrowObject", EInputEvent::IE_Pressed);

	ActionHandler.BindUFunction(this, "ThrowActor", Act, TimerHandler);

	Action->ActionDelegate = ActionHandler;

	InputComponent->AddActionBinding(*Action);
}

//throwing levitated object
void ALaw_Controller::ThrowActor(AActor* Act, FTimerHandle TimerHandler)
{
	//unfreezing object and unbinding throw action
	GetWorld()->GetTimerManager().ClearTimer(TimerHandler);
	
	AStaticMeshActor* MeshActor = (AStaticMeshActor*)Act;

	MeshActor->GetComponentByClass<UStaticMeshComponent>()->SetSimulatePhysics(true);

	InputComponent->RemoveActionBinding(InputComponent->GetNumActionBindings() - 1);

	//throwing object in cursor's direction
	FVector Pos;
	FHitResult Hit;
	GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);

	Pos = Hit.ImpactPoint;

	FVector ImpulseVector = Pos - Act->GetActorLocation();

	ImpulseVector.X /= ImpulseVector.Length();
	ImpulseVector.Y /= ImpulseVector.Length();
	ImpulseVector.Z = 0;

	MeshActor->GetStaticMeshComponent()->AddImpulse(ImpulseVector * 100000);
}

void ALaw_Controller::RotateActor(AActor* Act)
{

	FRotator Rot = Act->GetActorRotation();

	int RollMultiplier = 1;
	int PitchMultiplier = 1;
	int YawMultiplier = 1;

	if (abs(Rot.Roll) >= 90) RollMultiplier *= -1;
	if (abs(Rot.Pitch) >= 90) PitchMultiplier *= -1;
	if (abs(Rot.Yaw) >= 90) YawMultiplier *= -1;
	
	Rot.Add(FMath::RandRange(1, 2) * RollMultiplier,
			FMath::RandRange(1, 2) * PitchMultiplier,
			FMath::RandRange(1, 2) * YawMultiplier);
	

	Act->SetActorRotation(Rot);
}


