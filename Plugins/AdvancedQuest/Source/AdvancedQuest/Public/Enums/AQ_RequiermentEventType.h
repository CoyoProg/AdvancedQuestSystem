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
	bool LevelMet = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Requirement")
	TMap<int, bool> QuestID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Requirement")
	TMap<int, bool> EventID;
};
