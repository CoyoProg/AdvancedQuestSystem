// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuestPluginGameMode.h"
#include "QuestPluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

AQuestPluginGameMode::AQuestPluginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
