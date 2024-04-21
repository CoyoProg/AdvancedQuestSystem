// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AQ_SpecialEventData.generated.h"


UCLASS()
class ADVANCEDQUEST_API UAQ_SpecialEventData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Event Requirement")
	int EventID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Event Requirement")
	FString Description = FString();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Event Requirement")
	UObject* classRefence = nullptr;
};
