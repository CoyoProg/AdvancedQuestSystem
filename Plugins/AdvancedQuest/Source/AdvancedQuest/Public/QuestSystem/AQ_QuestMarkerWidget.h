// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "AQ_QuestMarkerWidget.generated.h"

enum class EAQ_QuestType : uint8;

/**
 * 
 */
UCLASS(Blueprintable)
class ADVANCEDQUEST_API UAQ_QuestMarkerWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | UI")
	void SetImageQuest(bool isEnded, EAQ_QuestType questType = EAQ_QuestType::MainQuest);
};
