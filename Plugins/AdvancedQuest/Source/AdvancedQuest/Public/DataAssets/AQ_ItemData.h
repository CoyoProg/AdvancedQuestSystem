#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AQ_ItemData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_ItemData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UTexture2D* Sprite = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ItemName = FString();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsStackable = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsQuestActor = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bIsQuestItem == true", EditConditionHides))
	int QuestID = 0;
};