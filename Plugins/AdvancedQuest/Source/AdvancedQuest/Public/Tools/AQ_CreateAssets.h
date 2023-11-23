// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AQ_CreateAssets.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_CreateAssets : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Create Assets")
	static int AssignUniqueQuestID();
	
	UFUNCTION(BlueprintCallable, Category = "Create Assets")
	static UActorComponent* AddComponent(TSubclassOf<class UActorComponent> ComponentClass, AActor* Actor, USceneComponent* ParentComponent, FName Name);

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest System")
	static void ShowFormattedDialog(const FString& InFileName);
};
