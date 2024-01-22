// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "AdvancedQuest_EditorStyle.h"

class FAdvancedQuest_EditorCommands : public TCommands<FAdvancedQuest_EditorCommands>
{
public:

	FAdvancedQuest_EditorCommands()
		: TCommands<FAdvancedQuest_EditorCommands>(TEXT("AdvancedQuest_Editor"), NSLOCTEXT("Contexts", "AdvancedQuest_Editor", "AdvancedQuest Plugin"), NAME_None, FAdvancedQuest_EditorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
