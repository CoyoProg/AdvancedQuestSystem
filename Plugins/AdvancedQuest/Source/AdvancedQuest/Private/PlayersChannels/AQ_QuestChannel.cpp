// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_QuestChannel.h"

#include <PlayersChannels/AQ_PlayerChannelsFacade.h>
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestComponent.h"
#include "QuestSystem/AQ_Quest.h"

#include <Kismet/GameplayStatics.h>
#include "Components/WidgetComponent.h"

void UAQ_QuestChannel::AddWidgetToViewport()
{
	/* Check if there is a BookQuest Widget class */
	if (!BookQuestWidgetClass)
		return;

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
		return;
	
	/* Create the BookQuest widget and add it to the viewport */
	BookQuest = CreateWidget<UAQ_BookQuest>(PlayerController, BookQuestWidgetClass);
	if (!BookQuest)
		return;

	BookQuest->AddToViewport();
}

void UAQ_QuestChannel::OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState)
{
	switch (QuestState)
	{
	case EAQ_QuestState::Active:
	case EAQ_QuestState::Valid:
	case EAQ_QuestState::Failed:
	{
		/* Update the Book Quest */
		if (BookQuest)
			BookQuest->UpdateQuestBook(QuestUpdate);
		break;
	}

	case EAQ_QuestState::Pending:
	case EAQ_QuestState::Archive:
	{
		/* Remove the Quest from the Book Quest */
		if (BookQuest)
			BookQuest->RemoveQuest(QuestUpdate);

		/* Remove the Quest Channel to the Quest Update delegate*/
		QuestUpdate->ObjectivesUpdatedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestStateChanged);
		break;
	}
	}
}

void UAQ_QuestChannel::OnPlayerLevelChange(int newLevel)
{
	if (LevelRequirementChangedDelegate.IsBound())
		LevelRequirementChangedDelegate.Broadcast(newLevel);
}

void UAQ_QuestChannel::OnQuestUpdate(UAQ_Quest* QuestUpdate)
{
	if (BookQuest)
		BookQuest->UpdateQuestBook(QuestUpdate);
}