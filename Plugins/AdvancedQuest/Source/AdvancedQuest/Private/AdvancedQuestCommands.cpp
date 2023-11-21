// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedQuestCommands.h"

#define LOCTEXT_NAMESPACE "FAdvancedQuestModule"

void FAdvancedQuestCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "AdvancedQuest", "Open Advanced Quest System", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
