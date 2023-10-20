// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CreateAssets.generated.h"

class UQuest;

/**
 * 
 */
UCLASS()
class DEMOREELRPG_API UCreateAssets : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Create Assets")
	static int AssignUniqueQuestID();
};
