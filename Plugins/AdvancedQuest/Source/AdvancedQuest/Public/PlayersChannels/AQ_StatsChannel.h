// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AQ_StatsChannel.generated.h"

UENUM(BlueprintType)
enum class EAQ_StatsEventType : uint8
{
    PlayerLevelUp       UMETA(DisplayName = "Player Level Up"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStatsEventDelegate, UObject*, entity, EAQ_NotifyEventType, eventType, float, InStatValue);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_StatsChannel : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void OnStatsEventNotify(EAQ_StatsEventType eventType, UObject* entity, float InStatValue = 1);

	FOnStatsEventDelegate OnStatsEventDelegate;
};
