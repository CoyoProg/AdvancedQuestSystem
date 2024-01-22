// Copyright 2024, Coyo Prog, All rights reserved.

#include "AdvancedQuest_EditorCommands.h"

#define LOCTEXT_NAMESPACE "FAdvancedQuest_EditorModule"

void FAdvancedQuest_EditorCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "AdvancedQuest_Editor", "Open Advanced Quest System", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
