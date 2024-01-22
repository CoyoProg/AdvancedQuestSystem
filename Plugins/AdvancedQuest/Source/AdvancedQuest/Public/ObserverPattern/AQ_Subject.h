// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Enums/AQ_NotifyEventType.h"

#include "AQ_Subject.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class UAQ_Subject : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ADVANCEDQUEST_API IAQ_Subject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Advanced Quest | Events | Subject")
	void AddObserver(UObject* observer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Advanced Quest | Events | Subject")
	void RemoveObserver(UObject* observer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Advanced Quest | Events | Subject")
	void NotifyObservers(UObject* entity, EAQ_NotifyEventType eventType, float amount = 1);

	//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Observer")
	//void OnNotifyEvent(UObject* entity);
};
