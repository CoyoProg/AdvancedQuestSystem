// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "AdvancedQuestStyle.h"

class FAdvancedQuestCommands : public TCommands<FAdvancedQuestCommands>
{
public:

	FAdvancedQuestCommands()
		: TCommands<FAdvancedQuestCommands>(TEXT("AdvancedQuest"), NSLOCTEXT("Contexts", "AdvancedQuest", "AdvancedQuest Plugin"), NAME_None, FAdvancedQuestStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
