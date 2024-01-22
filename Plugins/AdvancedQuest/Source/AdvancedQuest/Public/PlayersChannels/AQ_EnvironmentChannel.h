// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "PlayersChannels/AQ_Channels.h"
#include "AQ_EnvironmentChannel.generated.h"

UENUM(BlueprintType)
enum class EAQ_EnvironmentEventType : uint8
{
	Interact                UMETA(DisplayName = "Interact"),
	Travel                  UMETA(DisplayName = "Travel"),
	Puzzle                  UMETA(DisplayName = "Puzzle"),
	MiniGame                UMETA(DisplayName = "Mini-Game"),
};

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_EnvironmentChannel : public UAQ_Channels
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void OnEnvironmentEventNotify(EAQ_EnvironmentEventType eventType, UObject* entity);

};
