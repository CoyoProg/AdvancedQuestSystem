// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayersChannels/AQ_Channels.h"
#include "ObserverPattern/AQ_Observer.h"

UAQ_Channels::~UAQ_Channels()
{
	Observers.Empty();
}

void UAQ_Channels::AddObserver_Implementation(UObject* observerP)
{
	if (observerP->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()))
	{
		Observers.AddUnique(observerP);
	}
}

void UAQ_Channels::RemoveObserver_Implementation(UObject* observerP)
{
	if (observerP->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()))
	{
		int32 ItemIndex = -1;

		for (int32 Index = 0; Index < Observers.Num(); Index++)
		{
			if (Observers[Index] == observerP)
			{
				//FScopeLock Lock(&ObserversMutex);

				TFunction<void()> RemoveItemFunction = [this, observerP]()
					{
						Observers.RemoveSwap(observerP);
					};

				Async(EAsyncExecution::TaskGraphMainThread, RemoveItemFunction);

				break;
			}
		}
	}
}

void UAQ_Channels::NotifySubjects_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP)
{
	if (Observers.Num() == 0)
		return;

	for (auto actors : Observers)
	{
		IAQ_Observer::Execute_OnNotify(actors, entity, eventTypeP);
	}
}
