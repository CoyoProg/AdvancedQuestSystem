// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once
#include "AQ_RequiermentEventType.generated.h"

class UAQ_QuestData;

USTRUCT(Blueprintable, BlueprintType)
struct FAQ_RequiermentData
{
	GENERATED_BODY()
	FAQ_RequiermentData() :
		PlayerLevel(0)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Requirement")
	int PlayerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Requirement")
	TArray<int> QuestID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Requirement")
	TArray<int> EventID;
};


/**
 *
 */
UENUM(BlueprintType)
enum class EAQ_RequiermentEventType : uint8
{
    Level		UMETA(DisplayName = "Level Requierment"),
    Quest       UMETA(DisplayName = "Quest Requierment")
};
