// Fill out your copyright notice in the Description page of Project Settings.


#include "LawCharacter.h"
#include "Law_Controller.h"

ALawCharacter::ALawCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ALawCharacter::BeginPlay()
{
	Super::BeginPlay();

	//attaching current pawn to player controller
	ALaw_Controller* Control = (ALaw_Controller*)GetController();
	Control->LawPawn = this;
}

void ALawCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALawCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//teleporting to given location
void ALawCharacter::Teleport(FVector Location)
{
	SetActorLocation(Location);
}

//swapping positions with another given object
void ALawCharacter::Shambles(AActor* Target)
{
	//used arrays to not create 4 different variables for positions and rotations
	TArray<FVector> Positions{GetActorLocation(), Target->GetActorLocation()};
	TArray<FRotator> Rotations{GetActorRotation(), Target->GetActorRotation() };

	Target->SetActorLocationAndRotation(Positions[0], Rotations[0]);
	SetActorLocationAndRotation(Positions[1], Rotations[1]);
}

