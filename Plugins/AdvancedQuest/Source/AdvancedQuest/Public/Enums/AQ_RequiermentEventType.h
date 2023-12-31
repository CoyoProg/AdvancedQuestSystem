// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "AQ_RequiermentEventType.generated.h"

class UAQ_QuestData;

USTRUCT(Blueprintable, BlueprintType)
struct FAQ_RequiermentData
{
	GENERATED_BODY()
	FAQ_RequiermentData() :
		playerLevel(0)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Requierment")
	int playerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Requierment")
	TArray<int> questID;
};


/**
 *
 */
UENUM(BlueprintType)
enum class EAQ_RequiermentEventType : uint8
{
    Level   UMETA(DisplayName = "Level Requierment"),
    Quest       UMETA(DisplayName = "Quest Requierment")
};
