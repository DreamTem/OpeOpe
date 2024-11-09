// Fill out your copyright notice in the Description page of Project Settings.


#include "Law_Controller.h"
#include "Engine/StaticMeshActor.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"
#include "SwappableComponent.h"
#include "OperatableObjectComponent.h"

ALaw_Controller::ALaw_Controller()
{
}

void ALaw_Controller::SetupInputComponent()
{
	APlayerController::SetupInputComponent();

	//binding skills to actions
	InputComponent->BindAction("Teleport", EInputEvent::IE_Pressed, this, &ALaw_Controller::Teleport);
	InputComponent->BindAction("Shambles", EInputEvent::IE_Pressed, this, &ALaw_Controller::SwapWithObject);
	InputComponent->BindAction("Tact", EInputEvent::IE_Pressed, this, &ALaw_Controller::Tact);
}

//call teleporting to a location of a cursor
void ALaw_Controller::Teleport()
{
	if (LawPawn == nullptr) return;

	FHitResult Hit;
	GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);

	FVector Pos;
	Pos = Hit.ImpactPoint;

	LawPawn->Teleport(Pos);
}

//setup a delayed positiin swapping with an object under the cursor
void ALaw_Controller::SwapWithObject()
{
	if (LawPawn == nullptr) return;

	AActor* HitTarget;
	FHitResult Hit;

	GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);

	HitTarget = Hit.GetActor();

	USwappableComponent* HitComponent = HitTarget->GetComponentByClass<USwappableComponent>();

	if (HitTarget == nullptr || HitComponent == nullptr || HitTarget == LawPawn) return;

	UGameplayStatics::PlaySound2D(this,ShamblesCue);

	FVector LawPos = LawPawn->GetActorLocation();
	FVector ObjectPos = HitTarget->GetActorLocation();

	HitTarget->GetComponentByClass<USwappableComponent>()->TriggerSwap(LawPos);
	LawPawn->GetComponentByClass<USwappableComponent>()->TriggerSwap(ObjectPos);
}

//leviating object under the cursor
void ALaw_Controller::Tact()
{
	AActor* HitTarget;
	FHitResult Hit;

	GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);

	HitTarget = Hit.GetActor();
	UOperatableObjectComponent* HitComponent = HitTarget->GetComponentByClass<UOperatableObjectComponent>();

	if (HitTarget == nullptr || HitComponent == nullptr) return;

	UGameplayStatics::PlaySound2D(this, TactCue);

	HitComponent->LeviateObject();

	BindThrow(HitTarget);
}

//bind and action to throw levitated object
void ALaw_Controller::BindThrow(AActor* Act)
{
	FInputActionHandlerSignature ActionHandler;

	FInputActionBinding* Action = new FInputActionBinding("ThrowObject", EInputEvent::IE_Pressed);

	ActionHandler.BindUFunction(this, "ThrowActor", Act);

	Action->ActionDelegate = ActionHandler;

	InputComponent->AddActionBinding(*Action);
}

//throwing levitated object
void ALaw_Controller::ThrowActor(AActor* Act)
{

	//fixating cursor position
	FHitResult Hit;
	GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);

	FVector Pos;
	Pos = Hit.ImpactPoint;

	//unfreezing object and unbinding throw action
	Act->GetComponentByClass<UOperatableObjectComponent>()->ThrowObject(Pos);

	//unbinding throw action
	InputComponent->RemoveActionBinding(InputComponent->GetNumActionBindings() - 1);
}