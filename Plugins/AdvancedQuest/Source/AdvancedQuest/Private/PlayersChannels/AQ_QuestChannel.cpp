// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayersChannels/AQ_QuestChannel.h"
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestComponent.h"


#include <Kismet/GameplayStatics.h>
#include "Components/WidgetComponent.h"

void UAQ_QuestChannel::AddObserver_Implementation(UObject* observerP)
{
	/* Add a new eventType EventRequiermentType
	   Add Observers in: 
							ObserversLevelRequierment
							ObserversQuestRequierment
							Add one Observer list per Requierment Type 
	*/
}

void UAQ_QuestChannel::RemoveObserver_Implementation(UObject* observerP)
{
	/* Remove Observers in:
							ObserversLevelRequierment
							ObserversQuestRequierment
							Remove the Observer from the right List
	*/
}

void UAQ_QuestChannel::NotifyObservers()
{
	/* Notify All the observers per EventRequiermentType*/
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
