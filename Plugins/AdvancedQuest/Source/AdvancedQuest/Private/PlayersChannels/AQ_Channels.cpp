// Copyright 2024, Coyo Prog, All rights reserved.

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
		if (Observers.Contains(observerP))
			Observers.Remove(observerP);
	}
}

void UAQ_Channels::NotifyObservers_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP, float amount)
{
	/* We use a reverse loop here in case that 
	   the Observer needs to be removed from the list
	   and not affect the executeNotify order */
	int Range = Observers.Num();
	if (Range == 0)
		return;

	for (int Index = Range - 1; Index > -1; --Index)
	{
		IAQ_Observer::Execute_OnNotify(Observers[Index], entity, eventTypeP, amount);
	}
}
