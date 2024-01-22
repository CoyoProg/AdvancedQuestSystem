// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_UniqueIDComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDQUEST_API UAQ_UniqueIDComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAQ_UniqueIDComponent();

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Component")
	void SetUniqueID(int InUniqueID) { UniqueID = InUniqueID; }

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Component")
	const int GetUniqueID() const { return UniqueID; }

	UFUNCTION(CallInEditor, Category = "Advanced Quest | Component")
	void GenerateUniqueID();

private:
	UPROPERTY(VisibleAnywhere, Category = "Advanced Quest | Component")
	int UniqueID = 0;
};
