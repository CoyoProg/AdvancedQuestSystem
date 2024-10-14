// Copyright 2024, Coyo Prog, All rights reserved.

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
	Heal			UMETA(DisplayName = "Heal"),
	Damage			UMETA(DisplayName = "Damage"),

	Location		UMETA(DisplayName = "Location"),
	MiniGame        UMETA(DisplayName = "Mini-Game"),

	QuestCompletion	UMETA(DisplayName = "Quest Completion"),

	PlayerLevelUp   UMETA(DisplayName = "Player Level Up"),
};

UENUM(BlueprintType)
enum class EAQ_ObjectivesSpecifier : uint8
{
	None			UMETA(DisplayName = "Default"),
	Unique			UMETA(DisplayName = "Unique")
};
