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
	int Range = Observers.Num() - 1;

	if (observerP->GetClass()->ImplementsInterface(UAQ_Observer::StaticClass()))
	{
		for (int Index = Range; Index > -1; Index--)
		{
			if (Observers[Index] == observerP)
			{
				Observers.Remove(observerP);
				return;
			}
		}
	}
}

void UAQ_Channels::NotifyObservers_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP)
{
	if (Observers.Num() == 0)
		return;

	for (int Index = 0; Index < Observers.Num(); ++Index)
	{
		IAQ_Observer::Execute_OnNotify(Observers[Index], entity, eventTypeP);
	}
}
