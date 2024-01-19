#pragma once

#include "CoreMinimal.h"
#include "PlayersChannels/AQ_Channels.h"
#include "AQ_CombatChannel.generated.h"

UENUM(BlueprintType)
enum class EAQ_CombatEventType : uint8
{
    Kill       UMETA(DisplayName = "Kill"),
    Heal       UMETA(DisplayName = "Heal"),
    Damage     UMETA(DisplayName = "Damage"),
};

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_CombatChannel : public UAQ_Channels
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, Category = "Events|Combat")
	void OnCombatEventNotify(EAQ_CombatEventType eventType, UObject* entity, float amount = 1);
};
