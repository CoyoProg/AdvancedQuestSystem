// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AQ_QuestSounds.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_QuestSounds : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	/* Sound triggered when a quest is accepted */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Sound")
	USoundBase* QuestStart;

	/* Sound triggered when all the objective of a quest are completed */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Sound")
	USoundBase* QuestValid;

	/* Sound triggered when a quest is ended */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Sound")
	USoundBase* QuestEnd;

	/* Sound triggered when an objective of a quest is failed */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Sound")
	USoundBase* QuestFailed;

	/* Sound triggered when a quest is abandonned */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Sound")
	USoundBase* AbandonQuest;

	/* Sound triggered when an objective of a quest is updated */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Sound")
	USoundBase* ObjectiveUpdate;
};
