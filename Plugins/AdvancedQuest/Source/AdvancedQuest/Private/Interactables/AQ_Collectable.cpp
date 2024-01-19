#include "Interactables/AQ_Collectable.h"

#include <DataAssets/AQ_ItemData.h>
#include <QuestSystem/AQ_QuestManager.h>
#include <QuestSystem/AQ_Quest.h>

AAQ_Collectable::AAQ_Collectable()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAQ_Collectable::BeginPlay()
{
	if (ItemData->bIsQuestItem)
		SetQuestItem(ItemData->QuestID);

	Super::BeginPlay();
}

void AAQ_Collectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

