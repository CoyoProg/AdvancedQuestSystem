// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "AQ_CombatChannel.generated.h"

UENUM(BlueprintType)
enum class EAQ_CombatEventType : uint8
{
    Kill       UMETA(DisplayName = "Kill"),
    Heal       UMETA(DisplayName = "Heal"),
    Damage     UMETA(DisplayName = "Damage"),
    Protect    UMETA(DisplayName = "Protect"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKillEventDelegate, UObject*, entity, EAQ_NotifyEventType, eventType, float, amount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnProtectEventDelegate, UObject*, entity, EAQ_NotifyEventType, eventType, float, amount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHealEventDelegate, UObject*, entity, EAQ_NotifyEventType, eventType, float, amount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDamageEventDelegate, UObject*, entity, EAQ_NotifyEventType, eventType, float, amount);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_CombatChannel : public UObject
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void OnCombatEventNotify(EAQ_CombatEventType eventType, UObject* entity, float amount = 1);

    FOnKillEventDelegate OnKillEventDelegate;
    FOnProtectEventDelegate OnProtectEventDelegate;
    FOnHealEventDelegate OnHealEventDelegate;
    FOnDamageEventDelegate OnDamageEventDelegate;
};
