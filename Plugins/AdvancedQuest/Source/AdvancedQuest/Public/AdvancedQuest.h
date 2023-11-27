// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FAdvancedQuestModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	void ClosePlugin();

	// Delegate handler
	void OnBeginPIEHandler(bool bIsSimulating)
	{
		if (!bIsSimulating)
		{
			isPIE = true;
			ClosePlugin();
		}
	}

	void OnEndPIEHandler(bool bIsSimulating)
	{
		isPIE = false;
	}

private:
	void RegisterMenus();

	// Class member variable to store the tab ID
	FName widgetID;
	bool isPIE{ false };
	bool isOpen{ false };

	TSharedPtr<class FUICommandList> PluginCommands;
};
