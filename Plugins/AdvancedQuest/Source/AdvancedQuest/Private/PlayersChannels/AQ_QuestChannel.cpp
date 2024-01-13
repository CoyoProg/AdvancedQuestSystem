#include "PlayersChannels/AQ_QuestChannel.h"

#include <PlayersChannels/AQ_PlayerChannelsFacade.h>
#include "ObserverPattern/AQ_Observer.h"
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

	APlayerController* PlayerController = Cast<APlayerController>(OwnerWidget);
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
		break;
	case EAQ_QuestState::Valid:
	{
		/* Remove the Quest channel from the Objectives Update delegate*/
		QuestUpdate->ObjectivesUpdatedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		
		/* Update the Book Quest */
		if (BookQuest)
			BookQuest->UpdateQuestBook(QuestUpdate);
		break;
	}
	case EAQ_QuestState::Pending:
	{
		/* Remove the Quest from the Book Quest */
		if (BookQuest)
			BookQuest->RemoveQuest(QuestUpdate);

		/* Remove the Quest Channel to the Quest Update delegate*/
		QuestUpdate->ObjectivesUpdatedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestStateChanged);
		break;
	}
	case EAQ_QuestState::Archive:
	{
		/* Remove the quest from the book quest */
		if (BookQuest)
			BookQuest->RemoveQuest(QuestUpdate);

		/* Remove the Quest Channel from the Quest State Changed delegate*/
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestStateChanged);
		
		int QuestID = QuestUpdate->QuestData->QuestID;

		if (QuestRequirementChangedDelegate.IsBound())
			QuestRequirementChangedDelegate.Broadcast(QuestID);

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

void UAQ_QuestChannel::OnQuestRequirementMet(UAQ_Quest* quest)
{
	/* Remove the Quest from the Requirements delegates */
	if (quest->QuestData->questRequirements.QuestID.Num() > 0)
		QuestRequirementChangedDelegate.RemoveDynamic(quest, &UAQ_Quest::OnQuestRequirementChange);
	if (quest->QuestData->questRequirements.PlayerLevel != 0)
		LevelRequirementChangedDelegate.RemoveDynamic(quest, &UAQ_Quest::OnLevelRequirementChange);
}
