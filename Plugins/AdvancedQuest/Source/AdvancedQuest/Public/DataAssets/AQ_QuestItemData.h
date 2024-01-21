// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/AQ_ItemData.h"
#include "AQ_QuestItemData.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_QuestItemData : public UAQ_ItemData
{
	GENERATED_BODY()
	
public:
	UAQ_QuestItemData()
	{
		itemType = EAQ_ItemType::Quest;
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int QuestID = 0;
};
