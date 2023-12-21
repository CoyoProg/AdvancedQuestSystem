// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayersChannels/AQ_QuestChannel.h"

#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestComponent.h"

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

void UAQ_QuestChannel::CreateAllQuests()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(Owner->GetWorld(), AActor::StaticClass(), FoundActors);

	for (auto actors : FoundActors)
	{
		// Iterate through all components attached to the actor
		for (UActorComponent* ActorComponent : actors->GetComponents())
		{
			// Check if the component is a AQ_QuestComponent
			if (UAQ_QuestComponent* questComponent = Cast<UAQ_QuestComponent>(ActorComponent))
			{
				questComponent->CreateQuests(this);
			}
		}
	}
}

void UAQ_QuestChannel::AddQuestToArchive(UAQ_Quest* questArchive)
{
	QuestArchive.AddUnique(questArchive);
}
