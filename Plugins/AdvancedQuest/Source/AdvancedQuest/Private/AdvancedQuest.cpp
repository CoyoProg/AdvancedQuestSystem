// Copyright 2024, Coyo Prog, All rights reserved.

#include "AdvancedQuest.h"
#include "AdvancedQuestStyle.h"
#include "AdvancedQuestCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

#include "Misc/CoreDelegates.h"

#include "Editor/EditorEngine.h"
#include "EditorUtilityWidget.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilitySubsystem.h"

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
		FCanExecuteAction()
	);

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FAdvancedQuestModule::RegisterMenus));

	// Bind the OnBeginPIE & OnEndPIE delegates
	FEditorDelegates::BeginPIE.AddRaw(this, &FAdvancedQuestModule::OnBeginPIEHandler);
	FEditorDelegates::EndPIE.AddRaw(this, &FAdvancedQuestModule::OnEndPIEHandler);
}

void FAdvancedQuestModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FAdvancedQuestStyle::Shutdown();

	FAdvancedQuestCommands::Unregister();

	FEditorDelegates::BeginPIE.RemoveAll(this);
	FEditorDelegates::EndPIE.RemoveAll(this);
}

void FAdvancedQuestModule::PluginButtonClicked()
{
	if (isPIE)
		return;

	if (ClosePlugin())
		return;

	const FSoftObjectPath widgetAssetPath
	("/AdvancedQuest/Tools/QuestTool/AQ_EUW_CustomQuestTool.AQ_EUW_CustomQuestTool");

	UObject* widgetAssetLoaded = widgetAssetPath.TryLoad();
	if (widgetAssetLoaded == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Missing Expected widget class at :/AdvancedQuest/Tools/QuestTool/AQ_EUW_CustomQuestTool.AQ_EUW_CustomQuestTool"));
		return;
	}

	UEditorUtilityWidgetBlueprint* widget = Cast<UEditorUtilityWidgetBlueprint>(widgetAssetLoaded);
	if (widget == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Couldnt cast /AdvancedQuest/Tools/QuestTool/AQ_EUW_CustomQuestTool.AQ_EUW_CustomQuestTool to UEditorUtilityWidgetBlueprint"));
		return;
	}

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTabAndGetID(widget, widgetID);

}

bool FAdvancedQuestModule::ClosePlugin()
{
	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();

	return EditorUtilitySubsystem->CloseTabByID(widgetID);
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