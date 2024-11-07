// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LawCharacter.generated.h"

UCLASS()
class OPEOPE_API ALawCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ALawCharacter();

protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:	

	void Teleport(FVector Location);

	void Shambles(AActor* Target);
};
