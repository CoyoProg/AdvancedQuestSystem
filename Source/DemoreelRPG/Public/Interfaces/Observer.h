// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enums/NotifyEventType.h"
#include "Observer.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UObserver : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DEMOREELRPG_API IObserver
{
	GENERATED_BODY()

public:
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Observer")
	void OnNotify(const UObject* entity, ENotifyEventType eventType, int UniqueObjectID = 0);
};
