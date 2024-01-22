// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AQ_ItemData.generated.h"

UENUM(BlueprintType)
enum class EAQ_ItemType : uint8
{
    Default		UMETA(DisplayName = "World Item"),
	Ressource	UMETA(DisplayName = "Ressource Item"),
	Quest		UMETA(DisplayName = "Quest Item"),
};

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_ItemData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Item")
	class UTexture2D* Sprite = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Item")
	FString ItemName = FString();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Item")
	bool bIsStackable = true;

	EAQ_ItemType itemType = EAQ_ItemType::Default;
};