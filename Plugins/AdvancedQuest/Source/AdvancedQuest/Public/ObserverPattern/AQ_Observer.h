// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Enums/AQ_NotifyEventType.h"
#include "Enums/AQ_RequiermentEventType.h"

#include "AQ_Observer.generated.h"

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

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Observer")
	void OnNotify(UObject* entity, EAQ_NotifyEventType eventType, float amount = 1);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Observer")
	void OnNotifyRequierment(EAQ_RequiermentEventType eventType, FAQ_RequiermentData& requiermentData);
};
