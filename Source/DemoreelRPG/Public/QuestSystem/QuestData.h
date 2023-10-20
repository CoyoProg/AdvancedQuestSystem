// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Enums/ObjectivesType.h"
#include "QuestData.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FObjectives
{
	GENERATED_BODY()

	/** Objectives specificities */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	EObjectivesType objectiveType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UClass* objectiveTarget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
	FString targetName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
	FString objectiveSummary;

	/** If the goal is a unique target*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	bool isUnique = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int uniqueObjectID = 0;

	/** If the goal is timed */
	//UPROPERTY(BlueprintReadOnly, Category = "Quest")
	//bool isTimed = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	//float timer = 0;

	//UPROPERTY(BlueprintReadOnly, Category = "Quest")
	//float CurrentTime = 0;

	/** Amount needed to reach to goal */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int amountNeeded = 1;

	UPROPERTY(BlueprintReadOnly, Category = "Quest")
	int CurrentAmount = 0;
};

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DEMOREELRPG_API UQuestData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	/** Quest specificities */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int questID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FObjectives> objectives;

	/** Rewards */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int xpReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int goldReward;

	/** Inventory Reward */
	// To Do
};
