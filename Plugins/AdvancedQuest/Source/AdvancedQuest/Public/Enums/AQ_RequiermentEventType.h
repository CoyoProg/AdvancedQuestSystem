// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once
#include "DataAssets/AQ_SpecialEventData.h"
#include "AQ_RequiermentEventType.generated.h"


USTRUCT(Blueprintable, BlueprintType)
struct FAQ_RequiermentData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Requirement")
	int PlayerLevel = 0;
	bool LevelMet = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Requirement")
	TMap<int, bool> QuestID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Requirement")
	TMap<UAQ_SpecialEventData*, bool> SpecialEvents;
	bool AllEventsMet = true;
};
