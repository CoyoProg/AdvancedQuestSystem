// Fill out your copyright notice in the Description page of Project Settings.
#include "QuestSystem/AQ_QuestManager.h"
#include <AssetRegistry/AssetRegistryModule.h>

#include <QuestSystem/AQ_Quest.h>

#include <Kismet/KismetSystemLibrary.h>

// Sets default values for this component's properties
UAQ_QuestManager::UAQ_QuestManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bWantsInitializeComponent = true;
}


// Called when the game starts
void UAQ_QuestManager::BeginPlay()
{
	Super::BeginPlay();
}

void UAQ_QuestManager::InitializeComponent()
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	FTopLevelAssetPath assetPath = UKismetSystemLibrary::MakeTopLevelAssetPath("/Script/AdvancedQuest", "AQ_QuestData");
	AssetRegistry.GetAssetsByClass(assetPath, QuestDataAssets, true);


	for (auto assets : QuestDataAssets)
	{
		UAQ_QuestData* questData = Cast<UAQ_QuestData>(assets.GetAsset());

		if (!questData)
			return;

		UAQ_Quest* newQuest = NewObject<UAQ_Quest>(this, UAQ_Quest::StaticClass());
		newQuest->SetQuestData(questData);

		int questID = questData->questID;
		QuestDataCenter.Add(questID, newQuest);
	}
}


// Called every frame
void UAQ_QuestManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

