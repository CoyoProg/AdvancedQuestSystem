// Copyright 2024, Coyo Prog, All rights reserved.

#include "Character/AQ_PlayerController.h"
#include "GameFramework/Character.h"
#include "Character/AQ_Player.h"

void AAQ_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (!Character)
		return;

	SetupCameraComponent();
	SetupInputComponent();
}

void AAQ_PlayerController::MoveForward(float value)
{
	if (Character && value != 0)
		Character->AddMovementInput(Character->GetActorForwardVector(), value);
}

void AAQ_PlayerController::MoveRight(float value)
{
	if (Character && value != 0)
		Character->AddMovementInput(Character->GetActorRightVector(), value);
}

void AAQ_PlayerController::Jump()
{
	Character->Jump();
}

void AAQ_PlayerController::AddPitchInput(float value)
{
	float multiplier = value * MouseSensitivityY;
	Super::AddPitchInput(multiplier);
}

void AAQ_PlayerController::AddYawInput(float value)
{
	float multiplier = value * MouseSensitivityX;
	Super::AddYawInput(multiplier);
}


void AAQ_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void AAQ_PlayerController::SetupCameraComponent()
{
	Character->bUseControllerRotationYaw = true;
}

void AAQ_PlayerController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);

	Character = Cast<ACharacter>(InPawn);
}
