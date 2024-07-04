// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_QuestChannel.h"

#include "PlayersChannels/AQ_AudioChannel.h"
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestComponent.h"
#include "QuestSystem/AQ_Quest.h"
#include "DataAssets/AQ_QuestSounds.h"

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
	{
		/* Update the Book Quest */
		if (QuestWidgets)
			QuestWidgets->UpdateQuestWidgets(QuestUpdate);
		break;
	}
	case EAQ_QuestState::Valid:
	{
		AudioChannel->Play2DSound(this, SoundBank->QuestValid);

		/* Update the Book Quest */
		if (QuestWidgets)
			QuestWidgets->UpdateQuestWidgets(QuestUpdate);
		break;
	}
	case EAQ_QuestState::Failed:
	{
		AudioChannel->Play2DSound(this, SoundBank->QuestFailed);

		/* Update the Book Quest */
		if (QuestWidgets)
			QuestWidgets->UpdateQuestWidgets(QuestUpdate);
		break;
	}

	case EAQ_QuestState::Pending:
	{
		AudioChannel->Play2DSound(this, SoundBank->AbandonQuest);

		/* Remove the Quest from the Book Quest */
		if (QuestWidgets)
			QuestWidgets->RemoveQuest(QuestUpdate);

		/* Remove the Quest Channel to the Quest Update delegate*/
		QuestUpdate->PositiveObjectiveUpdateDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestProgress);
		QuestUpdate->NegativeObjectiveUpdateDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestRegression);
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestStateChanged);
		break;
	}
	case EAQ_QuestState::Archive:
	{
		PlayQuestEndSound(QuestUpdate);

		/* Remove the Quest from the Book Quest */
		if (QuestWidgets)
			QuestWidgets->RemoveQuest(QuestUpdate);

		/* Remove the Quest Channel to the Quest Update delegate*/
		QuestUpdate->PositiveObjectiveUpdateDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestProgress);
		QuestUpdate->NegativeObjectiveUpdateDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestRegression);
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

void UAQ_QuestChannel::PlayQuestEndSound(UAQ_Quest* InQuest)
{
	if (!SoundBank->bUseAdvancedSound)
	{
		AudioChannel->Play2DSound(this, SoundBank->QuestEnd);
		return;
	}

	switch (InQuest->QuestData->QuestType)
	{
	case EAQ_QuestType::MainQuest:
		AudioChannel->Play2DSound(this, SoundBank->MainQuestEnd);
		break;
	case EAQ_QuestType::SideQuest:
		AudioChannel->Play2DSound(this, SoundBank->SideQuestEnd);
		break;
	case EAQ_QuestType::Daily:
		AudioChannel->Play2DSound(this, SoundBank->DailyQuestEnd);
		break;
	case EAQ_QuestType::Weekly:
		AudioChannel->Play2DSound(this, SoundBank->WeeklyQuestEnd);
		break;
	}
}

void UAQ_QuestChannel::PlayQuestStartSound(UAQ_Quest* InQuest)
{
	if (!SoundBank->bUseAdvancedSound)
	{
		AudioChannel->Play2DSound(this, SoundBank->QuestStart);
		return;
	}

	switch (InQuest->QuestData->QuestType)
	{
	case EAQ_QuestType::MainQuest:
		AudioChannel->Play2DSound(this, SoundBank->MainQuestStart);
		break;

	case EAQ_QuestType::SideQuest:
		AudioChannel->Play2DSound(this, SoundBank->SideQuestStart);
		break;

	case EAQ_QuestType::Daily:
		AudioChannel->Play2DSound(this, SoundBank->DailyQuestStart);
		break;

	case EAQ_QuestType::Weekly:
		AudioChannel->Play2DSound(this, SoundBank->WeeklyQuestStart);
		break;
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

void UAQ_QuestChannel::OnQuestProgress(UAQ_Quest* QuestUpdate)
{
	AudioChannel->Play2DSound(this, SoundBank->ObjectiveUpdate);

	if (QuestWidgets)
		QuestWidgets->UpdateQuestWidgets(QuestUpdate);
}

void UAQ_QuestChannel::OnQuestRegression(UAQ_Quest* QuestUpdate)
{
	if (QuestWidgets)
		QuestWidgets->UpdateQuestWidgets(QuestUpdate);
}
