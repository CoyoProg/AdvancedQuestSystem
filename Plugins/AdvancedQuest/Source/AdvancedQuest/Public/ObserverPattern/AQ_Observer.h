// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Enums/AQ_NotifyEventType.h"
#include "Enums/AQ_RequiermentEventType.h"

#include "AQ_Observer.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UAQ_Observer : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ADVANCEDQUEST_API IAQ_Observer
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Observer")
	void OnNotify(UObject* entity, EAQ_NotifyEventType eventType);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Observer")
	void OnNotifyRequierment(EAQ_RequiermentEventType eventType, FAQ_RequiermentData& requiermentData);
};
