// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "ObserverPattern/AQ_Subject.h"

#include "AQ_Channels.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_Channels : public UObject, public IAQ_Subject
{
	GENERATED_BODY()
	
public:
	virtual void AddObserver_Implementation(UObject* observerP) override;
	virtual void RemoveObserver_Implementation(UObject* observerP) override;
	virtual void NotifySubjects_Implementation(const UObject* entity, EAQ_NotifyEventType eventTypeP, int UniqueObjectID = 0) override;

private:
	TArray<UObject*> Observers;
};
