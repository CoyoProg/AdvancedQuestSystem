// Copyright 2024, Coyo Prog, All rights reserved.

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

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Events")
	bool IsActorSleeping();
};
