#include "QuestSystem/AQ_QuestListenerComponent.h"
#include <QuestSystem/AQ_QuestManager.h>
#include "QuestSystem/AQ_Quest.h"

UAQ_QuestListenerComponent::UAQ_QuestListenerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UAQ_QuestListenerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld()->WorldType == EWorldType::PIE && GEditor->IsSimulateInEditorInProgress())
		return;

	QuestManager = GetWorld()->
		GetFirstPlayerController()->GetPawn()->
		GetComponentByClass<UAQ_QuestManager>();
}

void UAQ_QuestListenerComponent::OnQuestStateChangedWrapper(UAQ_Quest* questUpdate, EAQ_QuestState QuestState)
{
	OnQuestStateChanged.Broadcast(questUpdate, QuestState);

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
	if (!QuestManager 
		|| quest == nullptr 
		|| !quest->bIsRequirementMet)
		return;

	quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestListenerComponent::OnQuestStateChangedWrapper);
}

void UAQ_QuestListenerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

