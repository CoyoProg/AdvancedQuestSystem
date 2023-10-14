// Fill out your copyright notice in the Description page of Project Settings.

#include "Tools/CreateAssets.h"				

#include "AssetToolsModule.h"				//AssetTools (Editor only)

#include "Tools/QuestFactory.h"
#include "QuestSystem/Quest.h"
#include "Factories/WorldFactory.h"			//UnrealEd   (Editor only)
#include "Factories/MaterialFactoryNew.h"	//UnrealEd   (Editor only)

UQuest* UCreateAssets::CreateQuestAsset(FString assetPath, bool& boutSuccess, FString& outInfoMessage)
{
	/* Get The asset tools module */
	IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();

	// Load your custom factory
	UQuestFactory* CustomFactory = NewObject<UQuestFactory>();

	UObject* Asset = AssetTools.CreateAsset(
		FPaths::GetBaseFilename(assetPath),
		FPaths::GetPath(assetPath),
		UQuest::StaticClass(),
		CustomFactory
	);

	if (Asset == nullptr)
	{
		boutSuccess = false;
		outInfoMessage = FString::Printf(TEXT("Create asset failed - Either path is invalid or asset already exists. '%s'"), *assetPath);
		return nullptr;
	}

	// Cast the asset to UQuest
	UQuest* QuestAsset = Cast<UQuest>(Asset);

	if (QuestAsset)
	{
		// Set properties of the UQuest object
		QuestAsset->questTitle = "My super Custom Quest"; // Example property
		QuestAsset->AssignUniqueQuestID();

		// You can set any other properties as needed

		boutSuccess = true;
		outInfoMessage = FString::Printf(TEXT("Create asset succeeded. '%s'"), *assetPath);
		return QuestAsset;
	}

	return nullptr;
}
