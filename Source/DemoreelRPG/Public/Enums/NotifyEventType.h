// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NotifyEventType.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ENotifyEventType : uint8
{
    Interact   UMETA(DisplayName = "Interact"),
    Kill       UMETA(DisplayName = "Kill"),
    Collect    UMETA(DisplayName = "Collect")
};
