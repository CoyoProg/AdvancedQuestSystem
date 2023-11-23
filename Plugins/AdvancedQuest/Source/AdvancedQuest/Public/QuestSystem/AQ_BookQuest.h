// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AQ_BookQuest.generated.h"

class UAQ_Quest;
	
/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_BookQuest : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void AddQuest(UAQ_Quest* quest);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void RemoveQuest(UAQ_Quest* quest);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateQuestBook(UAQ_Quest* quest);
};
