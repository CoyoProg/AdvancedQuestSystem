// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactables/AQ_Interactable.h"
#include "AQ_Collectable.generated.h"

UCLASS()
class ADVANCEDQUEST_API AAQ_Collectable : public AAQ_Interactable
{
	GENERATED_BODY()
	
public:	
	AAQ_Collectable();
	virtual void Tick(float DeltaTime) override;

	/* Item Reference */
	class UAQ_ItemData* const GetItemData() { return ItemData; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Item")
	class UAQ_ItemData* ItemData;

	virtual void BeginPlay() override;
};
