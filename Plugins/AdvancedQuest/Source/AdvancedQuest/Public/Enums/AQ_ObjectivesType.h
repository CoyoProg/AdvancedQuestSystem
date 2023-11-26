// Fill out your copyright notice in the Description page of Project Settings.
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
	Location		UMETA(DisplayName = "Location"),
	Protect			UMETA(DisplayName = "Protect")
};

UENUM(BlueprintType)
enum class EAQ_ObjectivesSpecifier : uint8
{
	None			UMETA(DisplayName = "Default"),
	Unique			UMETA(DisplayName = "Unique"),
	Group			UMETA(DisplayName = "Group"),
};
