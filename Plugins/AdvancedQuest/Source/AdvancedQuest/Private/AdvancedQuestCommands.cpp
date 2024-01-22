// Copyright 2024, Coyo Prog, All rights reserved.

#include "AdvancedQuestCommands.h"

#define LOCTEXT_NAMESPACE "FAdvancedQuestModule"

void FAdvancedQuestCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "AdvancedQuest", "Open Advanced Quest System", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
