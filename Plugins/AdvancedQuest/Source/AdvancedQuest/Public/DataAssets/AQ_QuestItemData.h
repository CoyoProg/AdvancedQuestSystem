// Copyright 2024, Coyo Prog, All rights reserved.

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Quest")
	int QuestID = 0;
};
