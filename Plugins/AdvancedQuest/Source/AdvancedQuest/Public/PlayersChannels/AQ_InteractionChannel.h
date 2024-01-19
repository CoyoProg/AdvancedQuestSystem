#pragma once

#include "CoreMinimal.h"
#include "PlayersChannels/AQ_Channels.h"
#include "AQ_InteractionChannel.generated.h"

UENUM(BlueprintType)
enum class EAQ_InteractionEventType : uint8
{
    Interact       UMETA(DisplayName = "Interact"),
};


/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_InteractionChannel : public UAQ_Channels
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, Category = "Events|Combat")
	void OnInteractionEventNotify(EAQ_InteractionEventType eventType, UObject* entity);
};
