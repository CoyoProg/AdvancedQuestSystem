// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "AQ_InventoryChannel.generated.h"

UENUM(BlueprintType)
enum class EAQ_InventoryEventType : uint8
{
    Collect					UMETA(DisplayName = "Collect"),
	RemoveFromInventory		UMETA(DisplayName = "Remove From Inventory"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInventoryEventDelegate, UObject*, entity, EAQ_NotifyEventType, eventType, float, amount);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_InventoryChannel : public UObject
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void OnInventoryEventNotify(EAQ_InventoryEventType eventType, UObject* entity, float amount = 1);

	FOnInventoryEventDelegate OnInventoryEventDelegate;
};
