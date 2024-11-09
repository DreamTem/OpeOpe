// Fill out your copyright notice in the Description page of Project Settings.


#include "SwappableComponent.h"

// Sets default values for this component's properties
USwappableComponent::USwappableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USwappableComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USwappableComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//function that setups delayed position swap
void USwappableComponent::TriggerSwap(FVector PositionToSwap)
{

	FTimerHandle Timer;
	FTimerDelegate Delegate;

	Delegate.BindUFunction(this, "SwapPlaces", PositionToSwap);

	GetWorld()->GetTimerManager().SetTimer(Timer, Delegate, 0.9f, false);
}

//position swap
void USwappableComponent::SwapPlaces(FVector PositionToSwap)
{
	GetOwner()->SetActorLocation(PositionToSwap);
}

