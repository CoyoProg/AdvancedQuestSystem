// Copyright 2024, Coyo Prog, All rights reserved.

#include "AdvancedQuest_EditorStyle.h"
#include "AdvancedQuest_Editor.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FAdvancedQuest_EditorStyle::StyleInstance = nullptr;

void FAdvancedQuest_EditorStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FAdvancedQuest_EditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FAdvancedQuest_EditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("AdvancedQuest_EditorStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FAdvancedQuest_EditorStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("AdvancedQuest_EditorStyle"));

	FString ContentRoot = IPluginManager::Get().FindPlugin("AdvancedQuest")->GetBaseDir() / TEXT("Resources");
	Style->SetContentRoot(ContentRoot);

	const FVector2D IconSize(256.f, 256.f); // Set your desired icon size
	const FName IconName("Temporary"); // Set your icon name
	const FString IconPath = ContentRoot / IconName.ToString() + TEXT(".png");

	Style->Set("AdvancedQuest_Editor.PluginAction", new FSlateImageBrush(IconPath, IconSize));

	return Style;
}

void FAdvancedQuest_EditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FAdvancedQuest_EditorStyle::Get()
{
	return *StyleInstance;
}
