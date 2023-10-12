// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/Subject.h"
#include "Channels.generated.h"

/**
 * 
 */
UCLASS()
class DEMOREELRPG_API UChannels : public UObject, public ISubject
{
	GENERATED_BODY()
	
public:
	virtual void AddObserver_Implementation(UObject* observerP) override;
	virtual void RemoveObserver_Implementation(UObject* observerP) override;
	virtual void NotifySubjects_Implementation(const UObject* entity, ENotifyEventType eventTypeP, int UniqueObjectID = 0) override;

private:
	TArray<UObject*> Observers;
};
