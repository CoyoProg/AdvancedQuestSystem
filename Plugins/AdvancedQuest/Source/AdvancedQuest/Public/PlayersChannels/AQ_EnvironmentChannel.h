// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "AQ_EnvironmentChannel.generated.h"

UENUM(BlueprintType)
enum class EAQ_EnvironmentEventType : uint8
{
	Interact                UMETA(DisplayName = "Interact"),
	Travel                  UMETA(DisplayName = "Travel"),
	MiniGame                UMETA(DisplayName = "Mini-Game"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEnvironmentEventDelegate, UObject*, entity, EAQ_NotifyEventType, eventType, float, amount);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_EnvironmentChannel : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void OnEnvironmentEventNotify(EAQ_EnvironmentEventType eventType, UObject* entity);

	/* Delegates */
	FOnEnvironmentEventDelegate OnEnvironmentEventDelegate;
};
