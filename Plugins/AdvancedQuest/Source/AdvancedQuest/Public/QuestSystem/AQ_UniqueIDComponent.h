// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_UniqueIDComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDQUEST_API UAQ_UniqueIDComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAQ_UniqueIDComponent();

	UFUNCTION(BlueprintCallable, Category = "Unique ID Component")
	void SetUniqueID(int uniqueID) { UniqueID = uniqueID; }

	UFUNCTION(BlueprintCallable, Category = "Unique ID Component")
	const int GetUniqueID() const { return UniqueID; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Unique ID Component")
	int UniqueID;
};
