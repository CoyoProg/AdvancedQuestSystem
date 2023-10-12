// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Channels.h"
#include "Interfaces/Observer.h"

void UChannels::AddObserver_Implementation(UObject* observerP)
{
	if(observerP->GetClass()->ImplementsInterface(UObserver::StaticClass())) 
	{
		Observers.AddUnique(observerP);
	}
}

void UChannels::RemoveObserver_Implementation(UObject* observerP)
{
	if (observerP->GetClass()->ImplementsInterface(UObserver::StaticClass()))
	{
		int32 ItemIndex = -1;

		for (int32 Index = 0; Index < Observers.Num(); Index++)
		{
			if (Observers[Index] == observerP)
			{
				ItemIndex = Index;
				break;
			}
		}

		if (Observers.IsValidIndex(ItemIndex))
		{
			Observers.RemoveAt(ItemIndex);
		}

		//if (Observers.Contains(observerP))
		//	Observers.Remove(observerP);
	}
}

void UChannels::NotifySubjects_Implementation(const UObject* entity, ENotifyEventType eventTypeP, int UniqueObjectID)
{
	if (Observers.Num() == 0)
		return;

	for (auto actors : Observers)
	{
		IObserver::Execute_OnNotify(actors, entity, eventTypeP, UniqueObjectID);
	}
}
