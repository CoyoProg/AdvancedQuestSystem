// Copyright 2024, Coyo Prog, All rights reserved.

#include "Character/AQ_PlayerController.h"
#include "GameFramework/Character.h"
#include "Character/AQ_Player.h"

void AAQ_PlayerController::BeginPlay()
{
	Super::BeginPlay();

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

	// Bind Movement Inputs
	//InputComponent->BindAxis(MoveForwardInputName, this, &AAQ_PlayerController::MoveForward);
	//InputComponent->BindAxis(MoveRightInputName, this, &AAQ_PlayerController::MoveRight);
	//
	//InputComponent->BindAction(JumpInputName, EInputEvent::IE_Pressed, this, &AAQ_PlayerController::Jump);

}

void AAQ_PlayerController::SetupCameraComponent()
{
	Character->bUseControllerRotationYaw = true;

	//InputComponent->BindAxis(LookUpInputName, this, &AAQ_PlayerController::AddPitchInput);
	//InputComponent->BindAxis(LookRightInputName, this, &AAQ_PlayerController::AddYawInput);
}

void AAQ_PlayerController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);

	Character = Cast<AAQ_Player>(InPawn);
}
