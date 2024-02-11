// Copyright 2024, Coyo Prog, All rights reserved.

#include "Interactables/AQ_Interactable.h"

#include <QuestSystem/AQ_QuestManager.h>
#include <QuestSystem/AQ_Quest.h>
#include "Components/StaticMeshComponent.h"

#include "NiagaraComponent.h"

AAQ_Interactable::AAQ_Interactable()
{
 	PrimaryActorTick.bCanEverTick = true;
	
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
	RootComponent = SceneRoot;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object Mesh"));
	StaticMesh->SetupAttachment(RootComponent);

	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara Component"));
	NiagaraComponent->SetupAttachment(RootComponent);
	NiagaraComponent->bAutoActivate = false;
}

void AAQ_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAQ_Interactable::EnableParticles(bool isEnable)
{
	if (!NiagaraComponent)
		return;
	
	if (isEnable)
		NiagaraComponent->Activate();
	else
		NiagaraComponent->Deactivate();
}

void AAQ_Interactable::BeginPlay()
{
	Super::BeginPlay();

#if WITH_EDITOR
	if (GetWorld()->WorldType == EWorldType::PIE && GEditor->IsSimulateInEditorInProgress())
		return;
#endif

	if (bIsQuestActor)
	{
		bIsSleeping = true;
		GetWorld()->OnWorldBeginPlay.AddUObject(this, &AAQ_Interactable::LateBeginPlay);
	}
}

void AAQ_Interactable::LateBeginPlay()
{
	/* Get the local Player */
	APawn* localPlayer = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!localPlayer)
		return;

	/* Get the quest manager */
	QuestManager = localPlayer->GetComponentByClass<UAQ_QuestManager>();

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
	{
		bIsSleeping = false;
		EnableParticles(!bIsSleeping);
		return;
	}
	else if (questState == EAQ_QuestState::Archive)
	{
		quest->QuestStateChangedDelegate.RemoveDynamic(this, &AAQ_Interactable::OnQuestStateChanged);
	}
	else if (questState == EAQ_QuestState::Pending && bIsInitialStateSaved) // Called only when the Quest is Abandoned
		ResetToInitialState();

	bIsSleeping = true;
	EnableParticles(!bIsSleeping);
}

void AAQ_Interactable::SetQuestItem(int InQuestID)
{
	bIsQuestActor = true; 
	QuestID = InQuestID;
}
