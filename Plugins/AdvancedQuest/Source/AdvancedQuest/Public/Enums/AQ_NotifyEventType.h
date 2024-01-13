#pragma once
#include "AQ_NotifyEventType.generated.h"

/**
 *
 */
UENUM(BlueprintType)
enum class EAQ_NotifyEventType : uint8
{
    // Interaction
    Interact   UMETA(DisplayName = "Interact"),

    // Combat 
    Kill       UMETA(DisplayName = "Kill"),
    Heal       UMETA(DisplayName = "Heal"),
    Damage     UMETA(DisplayName = "Damage"),

    // Inventory
    Collect    UMETA(DisplayName = "Collect"),

    // Environment
    Travel     UMETA(DisplayName = "Travel")
};
