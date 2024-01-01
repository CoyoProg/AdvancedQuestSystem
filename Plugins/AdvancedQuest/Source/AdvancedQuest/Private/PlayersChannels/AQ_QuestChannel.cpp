// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayersChannels/AQ_QuestChannel.h"
#include <PlayersChannels/AQ_PlayerChannelsFacade.h>

#include "ObserverPattern/AQ_Observer.h"

#include <Kismet/GameplayStatics.h>
#include "Components/WidgetComponent.h"

void UAQ_QuestChannel::AddWidgetToViewport()
{
	if (!bookQuestWidgetClass)
		return;

	APlayerController* PlayerController = nullptr;

	APawn* Pawn = Cast<APawn>(Owner);
	if (!Pawn)
		return;

	PlayerController = Cast<APlayerController>(Pawn->GetController());
	
	/* Create the BookQuest widget and add it to the viewport */
	bookQuest = CreateWidget<UAQ_BookQuest>(PlayerController, bookQuestWidgetClass);
	if (!bookQuest)
		return;
	bookQuest->AddToViewport();
}

void UAQ_QuestChannel::OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState)
{
	switch (QuestState)
	{
	case EAQ_QuestState::Active:
		break;
	case EAQ_QuestState::Valid:
	{
		/* Remove from the ObjectivesUpdate delegate*/
		QuestUpdate->ObjectivesUpdatedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		
		break;
	}
	case EAQ_QuestState::Pending:
	{
		if (bookQuest)
			bookQuest->RemoveQuest(QuestUpdate);

		/* Remove the Quest Channel to the Quest Update delegate*/
		QuestUpdate->ObjectivesUpdatedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestStateChanged);
		break;
	}
	case EAQ_QuestState::Archive:
	{
		/* Remove the quest from the book quest */
		if (bookQuest)
			bookQuest->RemoveQuest(QuestUpdate);

		/* Remove from the QuestStateChanged delegate*/
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestStateChanged);
		
		/* Archive the quest */
		int questID = QuestUpdate->questData->questID;
		AddQuestToArchive(questID);
		break;
	}
	}
}

void UAQ_QuestChannel::AddQuestToArchive(int questID)
{
	QuestIDArchive.AddUnique(questID);

	if (QuestRequirementChangedDelegate.IsBound())
		QuestRequirementChangedDelegate.Broadcast(questID);
}

void UAQ_QuestChannel::OnPlayerLevelChange(int newLevel)
{
	if (LevelRequirementChangedDelegate.IsBound())
		LevelRequirementChangedDelegate.Broadcast(newLevel);
}

void UAQ_QuestChannel::OnQuestUpdate(UAQ_Quest* QuestUpdate)
{
	if (bookQuest)
		bookQuest->UpdateQuestBook(QuestUpdate);
}

void UAQ_QuestChannel::OnQuestRequirementMet(UAQ_Quest* quest)
{
	/* Remove the Quest from the Requirements delegates */
	if (quest->questData->questRequirements.questID.Num() > 0)
		QuestRequirementChangedDelegate.RemoveDynamic(quest, &UAQ_Quest::OnQuestRequiermentChange);
	if (quest->questData->questRequirements.playerLevel != 0)
		LevelRequirementChangedDelegate.RemoveDynamic(quest, &UAQ_Quest::OnLevelRequiermentChange);
}
