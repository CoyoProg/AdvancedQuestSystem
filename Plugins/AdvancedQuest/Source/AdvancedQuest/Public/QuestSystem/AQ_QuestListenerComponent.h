// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_QuestListenerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestStateChangedListenerDelegate, UAQ_Quest*, questUpdate, EAQ_QuestState, QuestState);

class UAQ_Quest;

UCLASS(Blueprintable, meta = (ABSTRACT))
class ADVANCEDQUEST_API UAQ_QuestListenerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAQ_QuestListenerComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest")
	TArray<int> QuestToFollow;

protected:
	virtual void BeginPlay() override;

	void ListenToQuests();

	/* References */
	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Quest")
	class UAQ_QuestManager* QuestManager = nullptr;

	UFUNCTION(Category = "Advanced Quest | Events")
	void OnQuestStateChangedWrapper(UAQ_Quest* questUpdate, EAQ_QuestState QuestState);

	// Use this delegate to be able to update actors in blueprint
	// when OnQuestStateChanged is triggered
	UPROPERTY(BlueprintAssignable, Category = "Advanced Quest | Events")
	FOnQuestStateChangedListenerDelegate OnQuestStateChanged;

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void BindFunctionsToQuestDelegates(UAQ_Quest* quest);
};
