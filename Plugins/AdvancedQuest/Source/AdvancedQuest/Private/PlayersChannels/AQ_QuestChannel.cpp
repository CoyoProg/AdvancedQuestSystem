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

void UAQ_QuestChannel::CreateAllQuests(IAQ_PlayerChannelsFacade* playerChannelListener)
{
	/* Check for all the Quest Component in the world */
	TArray<UAQ_QuestComponent*> FoundQuestComponents;
	GetAllQuestComponents(FoundQuestComponents);

	for (auto questCompoent : FoundQuestComponents)
	{
		/* Create all the quests */
		TArray<UAQ_Quest*> newQuests = questCompoent->CreateQuests();

		for (auto quest : newQuests)
		{
			/* Subscribe the Quest to the OnRequiermentsUpdate delegate*/
			if (quest->questData->questRequirements.playerLevel != 0)
				LevelRequiermentChangedDelegate.AddDynamic(quest, &UAQ_Quest::OnLevelRequiermentChange);
			
			if (quest->questData->questRequirements.questID.Num() > 0)
				QuestRequiermentChangedDelegate.AddDynamic(quest, &UAQ_Quest::OnQuestRequiermentChange);
		}
	}
}

void UAQ_QuestChannel::GetAllQuestComponents(TArray<UAQ_QuestComponent*>& foundQuestComponentsP)
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(Owner->GetWorld(), AActor::StaticClass(), FoundActors);

	for (auto actors : FoundActors)
	{
		for (UActorComponent* ActorComponent : actors->GetComponents())
		{
			if (UAQ_QuestComponent* questComponent = Cast<UAQ_QuestComponent>(ActorComponent))
			{
				foundQuestComponentsP.Add(questComponent);
			}
		}
	}
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

		/* Remove the Quest from the Requirements delegates */
		if(QuestUpdate->questData->questRequirements.playerLevel !=0)
			QuestRequiermentChangedDelegate.RemoveDynamic(QuestUpdate, &UAQ_Quest::OnQuestRequiermentChange);
		if (QuestUpdate->questData->questRequirements.playerLevel != 0)
			LevelRequiermentChangedDelegate.RemoveDynamic(QuestUpdate, &UAQ_Quest::OnLevelRequiermentChange);

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

	if (QuestRequiermentChangedDelegate.IsBound())
		QuestRequiermentChangedDelegate.Broadcast(questID);
}

void UAQ_QuestChannel::OnPlayerLevelChange(int newLevel)
{
	if (LevelRequiermentChangedDelegate.IsBound())
		LevelRequiermentChangedDelegate.Broadcast(newLevel);
}

void UAQ_QuestChannel::OnQuestUpdate(UAQ_Quest* QuestUpdate)
{
	if (bookQuest)
		bookQuest->UpdateQuestBook(QuestUpdate);
}
