#pragma once
#include "AQ_ObjectivesType.generated.h"

/**
 *
 */
UENUM(BlueprintType)
enum class EAQ_ObjectivesType : uint8
{
	Interact		UMETA(DisplayName = "Interact"),
	Collect			UMETA(DisplayName = "Collect"),
	Deliver         UMETA(DisplayName = "Deliver"),

	Kill			UMETA(DisplayName = "Kill"),
	Protect			UMETA(DisplayName = "Protect"),
	WavesOfEnemies	UMETA(DisplayName = "Waves Of Enemies"),

	Location		UMETA(DisplayName = "Location"),
	Puzzle          UMETA(DisplayName = "Puzzle"),
	MiniGame        UMETA(DisplayName = "Mini-Game"),

	PlayerLevelUp   UMETA(DisplayName = "Player Level Up"),
};

UENUM(BlueprintType)
enum class EAQ_ObjectivesSpecifier : uint8
{
	None			UMETA(DisplayName = "Default"),
	Unique			UMETA(DisplayName = "Unique")
};
