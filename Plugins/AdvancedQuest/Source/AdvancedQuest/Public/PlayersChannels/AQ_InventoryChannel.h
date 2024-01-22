// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "PlayersChannels/AQ_Channels.h"
#include "AQ_InventoryChannel.generated.h"

UENUM(BlueprintType)
enum class EAQ_InventoryEventType : uint8
{
    Collect					UMETA(DisplayName = "Collect"),
	RemoveFromInventory		UMETA(DisplayName = "Remove From Inventory"),
};

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_InventoryChannel : public UAQ_Channels
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void OnInventoryEventNotify(EAQ_InventoryEventType eventType, UObject* entity, float amount = 1);
};
