// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ObjectivesType.generated.h"

/**
 *
 */
UENUM(BlueprintType)
enum class EObjectivesType : uint8
{
	Interact		UMETA(DisplayName = "Interact"),
	InteractUnique	UMETA(DisplayName = "Interact Unique"),
	Collect			UMETA(DisplayName = "Collect"),
	CollectUnique	UMETA(DisplayName = "Collect Unique"),
	Kill			UMETA(DisplayName = "Kill"),
	KillUnique		UMETA(DisplayName = "Kill Unique"),
	Location		UMETA(DisplayName = "Location"),
	Protect			UMETA(DisplayName = "Protect"),
	ProtectUnique	UMETA(DisplayName = "Protect Unique")
};
