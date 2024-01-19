#include "Interactables/AQ_Interactable.h"

#include <QuestSystem/AQ_QuestManager.h>
#include <QuestSystem/AQ_Quest.h>

AAQ_Interactable::AAQ_Interactable()
{
 	PrimaryActorTick.bCanEverTick = true;
}

void AAQ_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAQ_Interactable::BeginPlay()
{
	Super::BeginPlay();

	if (bIsQuestActor)
		bIsSleeping = true;
	else
		return;

	GetWorld()->OnWorldBeginPlay.AddUObject(this, &AAQ_Interactable::LateBeginPlay);
}

void AAQ_Interactable::LateBeginPlay()
{
	QuestManager = GetWorld()->
		GetFirstPlayerController()->GetPawn()->
		GetComponentByClass<UAQ_QuestManager>();

	if (QuestManager)
	{
		UAQ_Quest* quest = QuestManager->QueryQuest(QuestID);
		if (quest == nullptr) // Failed to get any quest with that ID
		{
			bIsSleeping = false;
			return;
		}

		if (quest->QuestState == EAQ_QuestState::Active)
		{
			EnableParticles(true);
			bIsSleeping = false;
		}

		if (quest->QuestState != EAQ_QuestState::Archive)
			quest->QuestStateChangedDelegate.AddDynamic(this, &AAQ_Interactable::OnQuestStateChanged);
	}
}

void AAQ_Interactable::OnQuestStateChanged(UAQ_Quest* quest, EAQ_QuestState questState)
{
	if (questState == EAQ_QuestState::Active)
		bIsSleeping = false;
	else
		bIsSleeping = true;

	EnableParticles(!bIsSleeping);

	if (questState == EAQ_QuestState::Archive)
	{
		quest->QuestStateChangedDelegate.RemoveDynamic(this, &AAQ_Interactable::OnQuestStateChanged);
	}
}

void AAQ_Interactable::SetQuestItem(int InQuestID)
{
	bIsQuestActor = true; 
	QuestID = InQuestID;
}
