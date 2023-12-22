// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayersChannels/AQ_QuestChannel.h"
#include <PlayersChannels/AQ_PlayerChannelsFacade.h>

#include "ObserverPattern/AQ_Observer.h"

#include <Kismet/GameplayStatics.h>
#include "Components/WidgetComponent.h"


void UAQ_QuestChannel::AddObserverRequierment(UObject* observerP, EAQ_RequiermentEventType requiermentType)
{
	switch (requiermentType)
	{
	case EAQ_RequiermentEventType::Level:
	{
		if (observerP->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()))
		{
			ObserversLevelReq.AddUnique(observerP);
		}

		break;
	}
	case EAQ_RequiermentEventType::Quest:
	{
		if (observerP->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()))
		{
			ObserversQuestReq.AddUnique(observerP);
		}

		break;
	}
	}
}

void UAQ_QuestChannel::RemoveObserverRequierment(UObject* observerP, EAQ_RequiermentEventType requiermentType)
{
	switch (requiermentType)
	{
	case EAQ_RequiermentEventType::Level:
	{
		if (observerP->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()))
		{
			if (ObserversLevelReq.Contains(observerP))
				ObserversLevelReq.Remove(observerP);
		}

		break;
	}
	case EAQ_RequiermentEventType::Quest:
	{
		if (observerP->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()))
		{
			if (ObserversQuestReq.Contains(observerP))
				ObserversQuestReq.Remove(observerP);
		}
		break;
	}
	}
}

void UAQ_QuestChannel::NotifyObservers(EAQ_RequiermentEventType requiermentType, FAQ_RequiermentData& questRequierments)
{
	switch (requiermentType)
	{
	case EAQ_RequiermentEventType::Level:
	{
		if (ObserversLevelReq.Num() == 0)
			return;

		for (int Index = 0; Index < ObserversLevelReq.Num(); ++Index)
		{
			IAQ_Observer::Execute_OnNotifyRequierment(ObserversLevelReq[Index], requiermentType, questRequierments);
		}

		break;
	}
	case EAQ_RequiermentEventType::Quest:
	{
		if (ObserversQuestReq.Num() == 0)
			return;

		for (int Index = 0; Index < ObserversQuestReq.Num(); ++Index)
		{
			IAQ_Observer::Execute_OnNotifyRequierment(ObserversQuestReq[Index], requiermentType, questRequierments);
		}

		break;
	}
	}
}

void UAQ_QuestChannel::AddWidgetToViewport()
{
	if (!bookQuestWidgetClass)
		return;

	APlayerController* PlayerController = nullptr;

	APawn* Pawn = Cast<APawn>(Owner);
	if (!Pawn)
		return;

	PlayerController = Cast<APlayerController>(Pawn->GetController());
	
	bookQuest = CreateWidget<UAQ_BookQuest>(PlayerController, bookQuestWidgetClass);
	if (!bookQuest)
		return;

	bookQuest->AddToViewport();
}

void UAQ_QuestChannel::CreateAllQuests(IAQ_PlayerChannelsFacade* playerChannelListener)
{
	TArray<UAQ_QuestComponent*> FoundQuestComponents;
	GetAllQuestComponents(FoundQuestComponents);

	for (auto questCompoent : FoundQuestComponents)
	{
		TArray<UAQ_Quest*> newQuests = questCompoent->CreateQuests();

		for (auto quest : newQuests)
		{
			quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestChannel::OnQuestStateChanged);
			quest->QuestStateChangedDelegate.AddDynamic(playerChannelListener, &IAQ_PlayerChannelsFacade::OnQuestStateChanged);
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

void UAQ_QuestChannel::AddQuestToArchive(UAQ_Quest* questArchive)
{
	QuestArchive.AddUnique(questArchive);
}

void UAQ_QuestChannel::OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState)
{
	switch (QuestState)
	{
	case EAQ_QuestState::Active:
	{
		if(bookQuest)
			bookQuest->AddQuest(QuestUpdate);

		QuestUpdate->ObjectivesUpdatedDelegate.AddDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		break;
	}
	case EAQ_QuestState::Valid:
	{
		QuestUpdate->ObjectivesUpdatedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		break;
	}
	case EAQ_QuestState::Pending:
	{
		if (bookQuest)
			bookQuest->RemoveQuest(QuestUpdate);

		QuestUpdate->ObjectivesUpdatedDelegate.RemoveDynamic(this, &UAQ_QuestChannel::OnQuestUpdate);
		break;
	}
	case EAQ_QuestState::Archive:
	{
		if (bookQuest)
			bookQuest->RemoveQuest(QuestUpdate);

		break;
	}
	}
}

void UAQ_QuestChannel::OnQuestUpdate(UAQ_Quest* QuestUpdate)
{
	if (bookQuest)
		bookQuest->UpdateQuestBook(QuestUpdate);

	FString DebugMessage = TEXT("On Quest Update");
	float TimeToDisplay = 5.0f;
	FColor TextColor = FColor::Green;
	GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, TextColor, DebugMessage);

}
