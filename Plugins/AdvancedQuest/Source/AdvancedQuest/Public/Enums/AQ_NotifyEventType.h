// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "AQ_NotifyEventType.generated.h"

/**
 *
 */
UENUM(BlueprintType)
enum class EAQ_NotifyEventType : uint8
{
    Interact   UMETA(DisplayName = "Interact"),
    Kill       UMETA(DisplayName = "Kill"),
    Collect    UMETA(DisplayName = "Collect")
};
