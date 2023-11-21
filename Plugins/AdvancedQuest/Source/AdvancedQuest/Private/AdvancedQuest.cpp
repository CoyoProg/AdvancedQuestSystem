// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedQuest.h"
#include "AdvancedQuestStyle.h"
#include "AdvancedQuestCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

static const FName AdvancedQuestTabName("AdvancedQuest");

#define LOCTEXT_NAMESPACE "FAdvancedQuestModule"

void FAdvancedQuestModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FAdvancedQuestStyle::Initialize();
	FAdvancedQuestStyle::ReloadTextures();

	FAdvancedQuestCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction
	(
		FAdvancedQuestCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FAdvancedQuestModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FAdvancedQuestModule::RegisterMenus));
}

void FAdvancedQuestModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FAdvancedQuestStyle::Shutdown();

	FAdvancedQuestCommands::Unregister();
}

void FAdvancedQuestModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FAdvancedQuestModule::PluginButtonClicked()")),
							FText::FromString(TEXT("AdvancedQuest.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FAdvancedQuestModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FAdvancedQuestCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FAdvancedQuestCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAdvancedQuestModule, AdvancedQuest)