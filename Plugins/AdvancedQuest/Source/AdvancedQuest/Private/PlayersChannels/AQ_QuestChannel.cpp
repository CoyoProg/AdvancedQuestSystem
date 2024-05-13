// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_QuestChannel.h"

#include <PlayersChannels/AQ_PlayerChannelsFacade.h>
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestComponent.h"
#include "QuestSystem/AQ_Quest.h"

#include <Kismet/GameplayStatics.h>
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"

void UAQ_QuestChannel::AddWidgetToViewport()
{
	/* Check if there is a QuestWidgets Widget class */
	if (!QuestWidgetsClass)
		return;

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
		return;
	
	/* Create the QuestWidgets widget and add it to the viewport */
	QuestWidgets = CreateWidget<UAQ_BookQuest>(PlayerController, QuestWidgetsClass);
	if (!QuestWidgets)
		return;

	QuestWidgets->AddToViewport();
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
		if (QuestWidgets)
			QuestWidgets->UpdateQuestWidgets(QuestUpdate);
		break;
	}

	case EAQ_QuestState::Pending:
	case EAQ_QuestState::Archive:
	{
		/* Remove the Quest from the Book Quest */
		if (QuestWidgets)
			QuestWidgets->RemoveQuest(QuestUpdate);

		/* Remove the Quest Channel to the Quest Update delegate*/
		QuestUpdate->ObjectivesUpdatedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestStateChanged);
		break;
	}
	}

	if (QuestState == EAQ_QuestState::Pending)
	{
		FAQ_RequiermentData& requirements = QuestUpdate->QuestData->questRequirements;

		/* Unbind from delegates */
		if (requirements.SpecialEvents.Num() > 0)
			SpecialEventTriggerDelegate.RemoveDynamic(QuestUpdate, &UAQ_Quest::OnEventRequirementChange);

		if (requirements.PlayerLevel != 0)
			LevelRequirementChangedDelegate.RemoveDynamic(QuestUpdate, &UAQ_Quest::OnLevelRequirementChange);
	}
}

void UAQ_QuestChannel::OnPlayerLevelChange(int newLevel)
{
	if (LevelRequirementChangedDelegate.IsBound())
		LevelRequirementChangedDelegate.Broadcast(newLevel);
}

void UAQ_QuestChannel::OnSpecialEventTrigger(UAQ_SpecialEventData* specialEvent)
{
	if (SpecialEventTriggerDelegate.IsBound())
		SpecialEventTriggerDelegate.Broadcast(specialEvent);
}

void UAQ_QuestChannel::OnQuestUpdate(UAQ_Quest* QuestUpdate)
{
	if (QuestWidgets)
		QuestWidgets->UpdateQuestWidgets(QuestUpdate);
}