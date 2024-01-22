// Copyright 2024, Coyo Prog, All rights reserved.

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

	/** Objectives specificities */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Data")
	EAQ_ObjectivesType objectiveType = EAQ_ObjectivesType::Interact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Data", meta = (EditCondition = "objectiveType != EAQ_ObjectivesType::Collect && objectiveType != EAQ_ObjectivesType::Deliver", EditConditionHides))
	UClass* objectTarget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Data", meta = (EditCondition = "objectiveType == EAQ_ObjectivesType::Collect || objectiveType == EAQ_ObjectivesType::Deliver", EditConditionHides))
	class UAQ_ItemData* itemTarget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Quest | Data")
	FString objectiveSummary = FString();


	/** If the goal is a unique target*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Data", meta = (EditCondition = "objectiveType != EAQ_ObjectivesType::Collect && objectiveType != EAQ_ObjectivesType::Deliver", EditConditionHides))
	bool isUnique = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Data", meta = (EditCondition = "objectiveType != EAQ_ObjectivesType::Collect && objectiveType != EAQ_ObjectivesType::Deliver", EditConditionHides))
	int uniqueObjectID = 0;


	/** Amount needed to complete the objective */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest | Data")
	int amountNeeded = 1;

	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | Quest | Data")
	int CurrentAmount = 0;

	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | Quest | Data")
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
	/* Quest properties */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questTitle = FString();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questDescription = FString();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questSummary = FString();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int QuestID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FAQ_RequiermentData questRequirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FAQ_RequiermentData requirementsProgression;
	

	/* Objectives */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FAQ_Objectives> objectives;


	/** Rewards */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int xpReward = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int goldReward = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<class UAQ_ItemData*> itemsReward; // Need to be replaced with your Own ItemData
};
