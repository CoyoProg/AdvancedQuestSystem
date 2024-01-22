// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AQ_IInteractable.generated.h"

class IAQ_PlayerChannelsFacade;

UINTERFACE(Blueprintable)
class UAQ_IInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ADVANCEDQUEST_API IAQ_IInteractable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Events")
	void Interact(const TScriptInterface<IAQ_PlayerChannelsFacade>& PlayerChannel);
};
