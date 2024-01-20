#pragma once
#include "AQ_NotifyEventType.generated.h"

/**
 *
 */
UENUM(BlueprintType)
enum class EAQ_NotifyEventType : uint8
{
    // Combat 
	Kill                    UMETA(DisplayName = "Kill"),
	Heal                    UMETA(DisplayName = "Heal"),
    Damage                  UMETA(DisplayName = "Damag"),

    // Inventory
    Collect                 UMETA(DisplayName = "Collect"),
    RemovedFromInventory    UMETA(DisplayName = "Remove From Inventory"),
    Deliver                 UMETA(DisplayName = "Deliver to"),

    // Environment
    Interact                UMETA(DisplayName = "Interact with"),
    Travel                  UMETA(DisplayName = "Travel to"),
    Puzzle                  UMETA(DisplayName = "Puzzle Solve"),
    MiniGame                UMETA(DisplayName = "Mini-Game Complete"),


    // Player Related
    PlayerLevelUp           UMETA(DisplayName = "Player Level Up"),
};
