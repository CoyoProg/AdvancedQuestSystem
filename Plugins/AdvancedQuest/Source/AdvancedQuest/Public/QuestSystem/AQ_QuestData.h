// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "Enums/AQ_ObjectivesType.h"
#include "Enums/AQ_RequiermentEventType.h"

#include "AQ_QuestData.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FAQ_Objectives
{
	GENERATED_BODY()
	FAQ_Objectives() : objectiveType(EAQ_ObjectivesType::Interact),
		objectiveTarget(nullptr),
		objectiveSummary(TEXT("")),
		isUnique(false),
		uniqueObjectID(0),
		amountNeeded(1),
		CurrentAmount(0) {}

	/** Objectives specificities */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	EAQ_ObjectivesType objectiveType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UClass* objectiveTarget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
	FString objectiveSummary;

	/** If the goal is a unique target*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	bool isUnique;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int uniqueObjectID;

	/** Amount needed to complete the objective */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int amountNeeded;

	UPROPERTY(BlueprintReadWrite, Category = "Quest")
	int CurrentAmount;

	UPROPERTY(BlueprintReadWrite, Category = "Quest")
	bool isObjectiveComplete = false;
};

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_QuestData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UAQ_QuestData() : questTitle(TEXT("")),
		questDescription(TEXT("")),
		questID(0),
		xpReward(0),
		goldReward(0) {}

	/* Quest properties */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questSummary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int questID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FAQ_RequiermentData questRequirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FAQ_RequiermentData requirementsProgression;
	
	/* Objectives */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FAQ_Objectives> objectives;

	/** Rewards */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int xpReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int goldReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<UObject*> itemsReward;
};
