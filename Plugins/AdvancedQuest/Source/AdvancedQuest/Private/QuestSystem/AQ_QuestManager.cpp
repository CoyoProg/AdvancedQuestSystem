// Copyright 2024, Coyo Prog, All rights reserved.

#include "QuestSystem/AQ_QuestManager.h"
#include <AssetRegistry/AssetRegistryModule.h>

#include <QuestSystem/AQ_Quest.h>
#include <PlayersChannels/AQ_PlayerChannels.h>

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

#include "Misc/EngineVersionComparison.h"
#include <Kismet/KismetSystemLibrary.h>

#include "Engine/World.h"
#include "GameFramework/Actor.h"

UAQ_QuestManager::UAQ_QuestManager()
{
	PrimaryComponentTick.bCanEverTick = true;
	bWantsInitializeComponent = true;
}

void UAQ_QuestManager::InitializeComponent()
{
	/* Get the Asset RegistryModule */
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	TArray<FAssetData> QuestDataAssets;

	/* Get all the Quest Data within the PLUGIN FOLDER */
#if UE_VERSION_NEWER_THAN(5, 1, 9)
	FTopLevelAssetPath assetPath = UKismetSystemLibrary::MakeTopLevelAssetPath("/Script/AdvancedQuest", "AQ_QuestData");
	AssetRegistry.GetAssetsByClass(assetPath, QuestDataAssets, true);
#else 
	FTopLevelAssetPath assetPath = FTopLevelAssetPath("/Script/AdvancedQuest", "AQ_QuestData");
	AssetRegistry.GetAssetsByClass(assetPath, QuestDataAssets, true);
#endif

	verifyf(
		!QuestDataAssets.IsEmpty(),
		TEXT("No quest data found in the content drawer")
	);

	/* Create a quest for each Quest Data found */
	for (auto assets : QuestDataAssets)
	{
		UAQ_QuestData* QuestData = Cast<UAQ_QuestData>(assets.GetAsset());
	
		if (!QuestData)
			return;
	
		UAQ_Quest* newQuest = NewObject<UAQ_Quest>(this, UAQ_Quest::StaticClass());
		newQuest->SetQuestData(QuestData);
	
		int QuestID = QuestData->QuestID;
	
		/* Add the quest in QuestDataCenter with it's ID as key to retrieve it easily*/
		QuestDataCenter.Add(QuestID, newQuest);

		if (QuestData->QuestType == EAQ_QuestType::Daily)
			OnNewDayDelegate.AddUniqueDynamic(newQuest, &UAQ_Quest::OnNewDay);

		if (QuestData->QuestType == EAQ_QuestType::Weekly)
			OnNewWeekDelegate.AddUniqueDynamic(newQuest, &UAQ_Quest::OnNewDay);
	}

	/* Load the save to update all the Objectives & current state for each quests */
	LoadQuestData(); // This function is implemented in blueprint
}

void UAQ_QuestManager::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->OnWorldBeginPlay.AddUObject(this, &UAQ_QuestManager::LateBeginPlay);
}

void UAQ_QuestManager::LateBeginPlay()
{
	/* Get the Player Channels component */
	UAQ_PlayerChannels* playerChannels = GetOwner()->FindComponentByClass<UAQ_PlayerChannels>();

	verifyf(
		IsValid(playerChannels),
		TEXT("The player channel is missing on %s"), *GetOwner()->GetName()
	);

	/* Generate an array with all the quests in the QuestDataCenter */
	TArray<UAQ_Quest*> temporaryQuests;
	QuestDataCenter.GenerateValueArray(temporaryQuests);

	verifyf(
		!QuestDataCenter.IsEmpty(),
		TEXT("No quest data found in the content drawer")
	);

	int iterations = 0;
	/* Call On Quest Created for each quests */
	for (auto quests : temporaryQuests)
	{
		verifyf(
			IsValid(quests),
			TEXT("Quest not valid! Iteration %i"), iterations);

		/* According to the state of each quests, the Player Channels will update
		the Quest channel and its book quest, and Functions will be bind to delegates */
		playerChannels->OnQuestCreated(quests);
		iterations++;
	}
}

UAQ_Quest* UAQ_QuestManager::QueryQuest(int QuestID)
{
	/* Find the Quest corresponding to the ID */
	if (QuestDataCenter.Find(QuestID))
		return QuestDataCenter[QuestID];

	UE_LOG(LogTemp, Warning, TEXT("THERE IS NO QUEST WITH %i ID"), QuestID);
	return nullptr;
}
