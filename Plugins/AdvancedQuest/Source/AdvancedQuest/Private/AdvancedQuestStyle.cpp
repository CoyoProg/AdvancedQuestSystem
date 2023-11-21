// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedQuestStyle.h"
#include "AdvancedQuest.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FAdvancedQuestStyle::StyleInstance = nullptr;

void FAdvancedQuestStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FAdvancedQuestStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FAdvancedQuestStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("AdvancedQuestStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FAdvancedQuestStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("AdvancedQuestStyle"));

	FString ContentRoot = IPluginManager::Get().FindPlugin("AdvancedQuest")->GetBaseDir() / TEXT("Resources");
	Style->SetContentRoot(ContentRoot);

	const FVector2D IconSize(256.f, 256.f); // Set your desired icon size
	const FName IconName("Temporary"); // Set your icon name
	const FString IconPath = ContentRoot / IconName.ToString() + TEXT(".png");

	Style->Set("AdvancedQuest.PluginAction", new FSlateImageBrush(IconPath, IconSize));

	return Style;
}

void FAdvancedQuestStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FAdvancedQuestStyle::Get()
{
	return *StyleInstance;
}
