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
	static int AssignUniqueID(const FString& valueName);
	
	UFUNCTION(BlueprintCallable, Category = "Create Assets")
	static UActorComponent* AddComponent(TSubclassOf<class UActorComponent> ComponentClass, AActor* Actor, USceneComponent* ParentComponent, FName Name);

	UFUNCTION(BlueprintCallable, Category = "Create Assets")
	static void RemoveComponent(UActorComponent* ActorComponent, AActor* Actors);

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest System")
	static void ShowFormattedDialog(const FString& InFileName);

	UFUNCTION(BlueprintCallable, Category = "Create Assets")
	static void UpdateActor(AActor* Actor);
	
	UFUNCTION(BlueprintCallable, Category = "Create Assets")
	static void SavePackage(UObject* Object);
};
