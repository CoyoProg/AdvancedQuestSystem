// Copyright 2024, Coyo Prog, All rights reserved.

#include "Interactables/AQ_Collectable.h"

#include <DataAssets/AQ_ItemData.h>
#include <DataAssets/AQ_QuestItemData.h>
#include <QuestSystem/AQ_QuestManager.h>
#include <QuestSystem/AQ_Quest.h>


AAQ_Collectable::AAQ_Collectable()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAQ_Collectable::BeginPlay()
{
	if (ItemData->itemType == EAQ_ItemType::Quest)
	{
		UAQ_QuestItemData* QuestItem = Cast<UAQ_QuestItemData>(ItemData);
		SetQuestItem(QuestItem->QuestID);
	}


	Super::BeginPlay();
}

void AAQ_Collectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

