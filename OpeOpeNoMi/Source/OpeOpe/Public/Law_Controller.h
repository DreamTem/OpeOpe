// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "InputCoreTypes.h"
#include "LawCharacter.h"
#include "Law_Controller.generated.h"
/**
 * 
 */
UCLASS()
class OPEOPE_API ALaw_Controller : public APlayerController
{
	GENERATED_BODY()
	
	public:
		ALaw_Controller();

		ALawCharacter* LawPawn;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* ShamblesCue;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* TactCue;

		virtual void SetupInputComponent() override;

		void Teleport();

		void SwapWithObject();

		void Tact();

		void BindThrow(AActor* Act);

		UFUNCTION()
		void ThrowActor(AActor* Act);
};
