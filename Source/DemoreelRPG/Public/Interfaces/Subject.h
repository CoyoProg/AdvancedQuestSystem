// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enums/NotifyEventType.h"
#include "Subject.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class USubject : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DEMOREELRPG_API ISubject
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Observer")
	void AddObserver(UObject* observer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Observer")
	void RemoveObserver(UObject* observer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Subject")
	void NotifySubjects(const UObject* entity, ENotifyEventType eventType, int UniqueObjectID = 0);
};
