// Copyright 2024, Coyo Prog, All rights reserved.

#include "AdvancedQuest_Editor.h"
#include "AdvancedQuest_EditorStyle.h"
#include "AdvancedQuest_EditorCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

#include "Misc/CoreDelegates.h"

#include "Editor/EditorEngine.h"
#include "EditorUtilityWidget.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilitySubsystem.h"

static const FName AdvancedQuest_EditorTabName("AdvancedQuest_Editor");

#define LOCTEXT_NAMESPACE "FAdvancedQuest_EditorModule"

void FAdvancedQuest_EditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FAdvancedQuest_EditorStyle::Initialize();
	FAdvancedQuest_EditorStyle::ReloadTextures();

	FAdvancedQuest_EditorCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction
	(
		FAdvancedQuest_EditorCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FAdvancedQuest_EditorModule::PluginButtonClicked),
		FCanExecuteAction()
	);

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FAdvancedQuest_EditorModule::RegisterMenus));

	// Bind the OnBeginPIE & OnEndPIE delegates
	FEditorDelegates::BeginPIE.AddRaw(this, &FAdvancedQuest_EditorModule::OnBeginPIEHandler);
	FEditorDelegates::EndPIE.AddRaw(this, &FAdvancedQuest_EditorModule::OnEndPIEHandler);
}

void FAdvancedQuest_EditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FAdvancedQuest_EditorStyle::Shutdown();

	FAdvancedQuest_EditorCommands::Unregister();

	FEditorDelegates::BeginPIE.RemoveAll(this);
	FEditorDelegates::EndPIE.RemoveAll(this);
}

void FAdvancedQuest_EditorModule::PluginButtonClicked()
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

bool FAdvancedQuest_EditorModule::ClosePlugin()
{
	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();

	return EditorUtilitySubsystem->CloseTabByID(widgetID);
}

void FAdvancedQuest_EditorModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FAdvancedQuest_EditorCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FAdvancedQuest_EditorCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAdvancedQuest_EditorModule, AdvancedQuest_Editor)