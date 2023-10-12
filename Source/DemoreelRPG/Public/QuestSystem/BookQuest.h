// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BookQuest.generated.h"

class UQuest;

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DEMOREELRPG_API UBookQuest : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void AddQuest(UQuest* questP);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateQuestBook(UQuest* questP);
};
