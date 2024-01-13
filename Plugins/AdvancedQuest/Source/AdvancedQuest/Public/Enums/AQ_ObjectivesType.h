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

	Kill			UMETA(DisplayName = "Kill"),
	Protect			UMETA(DisplayName = "Protect"),
	WavesOfEnemies	UMETA(DisplayName = "Waves Of Enemies"),

	Location		UMETA(DisplayName = "Location")
};

UENUM(BlueprintType)
enum class EAQ_ObjectivesSpecifier : uint8
{
	None			UMETA(DisplayName = "Default"),
	Unique			UMETA(DisplayName = "Unique")
};
