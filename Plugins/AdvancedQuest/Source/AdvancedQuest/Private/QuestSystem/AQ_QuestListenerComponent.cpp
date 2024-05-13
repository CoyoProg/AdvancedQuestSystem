// Copyright 2024, Coyo Prog, All rights reserved.

#include "QuestSystem/AQ_QuestListenerComponent.h"
#include <QuestSystem/AQ_QuestManager.h>
#include "QuestSystem/AQ_Quest.h"

#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"

UAQ_QuestListenerComponent::UAQ_QuestListenerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UAQ_QuestListenerComponent::BeginPlay()
{
	Super::BeginPlay();

#if WITH_EDITOR
	if (GetWorld()->WorldType == EWorldType::PIE && GEditor->IsSimulateInEditorInProgress())
		return;
#endif

	/* Get the local Player */
	APawn* localPlayer = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!localPlayer)
		return;

	/* Get the quest manager */
	QuestManager = localPlayer->FindComponentByClass<UAQ_QuestManager>();
}

void UAQ_QuestListenerComponent::OnQuestStateChangedWrapper(UAQ_Quest* questUpdate, EAQ_QuestState QuestState)
{
	OnQuestStateChanged.Broadcast(questUpdate, QuestState);

	/* Unbind if the quest isn't active anymore */
	switch (questUpdate->QuestState)
	{
	case EAQ_QuestState::Pending:
	case EAQ_QuestState::Failed:
	case EAQ_QuestState::Archive:
	{
		questUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestListenerComponent::OnQuestStateChangedWrapper);
		break;
	}

	default:
		break;
	}

}

void UAQ_QuestListenerComponent::BindFunctionsToQuestDelegates(UAQ_Quest* quest)
{
	/* Only bind to the delegate when the quest is active */
	if (!QuestManager 
		|| quest == nullptr 
		|| !quest->bIsRequirementMet)
		return;

	quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestListenerComponent::OnQuestStateChangedWrapper);
}
