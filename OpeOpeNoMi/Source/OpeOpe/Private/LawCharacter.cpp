// Fill out your copyright notice in the Description page of Project Settings.


#include "LawCharacter.h"
#include "Law_Controller.h"
#include "Kismet/GameplayStatics.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"

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
	UGameplayStatics::PlaySound2D(this, TeleportCue);
	SetActorLocation(Location);
}

