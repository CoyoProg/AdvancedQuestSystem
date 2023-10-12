// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoreelRPGGameMode.h"
#include "DemoreelRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemoreelRPGGameMode::ADemoreelRPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
