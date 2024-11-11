// Fill out your copyright notice in the Description page of Project Settings.


#include "OperatableObjectComponent.h"
#include "Engine/StaticMeshActor.h"

// Sets default values for this component's properties
UOperatableObjectComponent::UOperatableObjectComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOperatableObjectComponent::BeginPlay()
{
	Super::BeginPlay();

	Owner = GetOwner();
	
}


// Called every frame
void UOperatableObjectComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	//randomly rotating object around
	if (IsRotating)
	{
		FRotator Rot = Owner->GetActorRotation();

		int RollMultiplier = 1;
		int PitchMultiplier = 1;
		int YawMultiplier = 1;

		if (abs(Rot.Roll) >= 90) RollMultiplier *= -1;
		if (abs(Rot.Pitch) >= 90) PitchMultiplier *= -1;
		if (abs(Rot.Yaw) >= 90) YawMultiplier *= -1;

		Rot.Add(FMath::RandRange(1, 2) * RollMultiplier,
			FMath::RandRange(1, 2) * PitchMultiplier,
			FMath::RandRange(1, 2) * YawMultiplier);

		Owner->SetActorRotation(Rot);
	}
}

void UOperatableObjectComponent::LeviateObject()
{
	//leviating the object up by 300 points
	FVector LevitatedPos = Owner->GetActorLocation();
	LevitatedPos.Z += 300;

	Owner->SetActorLocation(LevitatedPos);

	//freezing object's movement till it is thrown
	Owner->GetComponentByClass<UStaticMeshComponent>()->SetSimulatePhysics(false);

	//make levitated object rotate till it is thrown
	IsRotating = true;
}

//throw this object towards some direction
void UOperatableObjectComponent::ThrowObject(FVector Direction)
{
	//unfreezing object and stop rotating
	UStaticMeshComponent* MeshComponent = Owner->GetComponentByClass<UStaticMeshComponent>();
	MeshComponent->SetSimulatePhysics(true);

	IsRotating = false;

	//throwing object in cursor's direction
	FVector ImpulseVector = Direction - Owner->GetActorLocation();

	ImpulseVector.X /= ImpulseVector.Length();
	ImpulseVector.Y /= ImpulseVector.Length();
	ImpulseVector.Z = 0;

	MeshComponent->AddImpulse(ImpulseVector * 100000);
}