// Copyright 2024, Coyo Prog, All rights reserved.

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
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest")
	static int AssignUniqueID(const FString& valueName);
	
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Component")
	static UActorComponent* AddComponent(TSubclassOf<class UActorComponent> ComponentClass, AActor* Actor, USceneComponent* ParentComponent, FName Name);

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Component")
	static void RemoveComponent(UActorComponent* ActorComponent, AActor* Actors);

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Debug")
	static void ShowFormattedDialog(const FString& InFileName);

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Debug")
	static void UpdateActor(AActor* Actor);
	
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Debug")
	static void SavePackage(UObject* Object);
};
