// Copyright 2024, Coyo Prog, All rights reserved.

#include "QuestSystem/AQ_QuestComponent.h"

#include "QuestSystem/AQ_QuestMarkerWidget.h"
#include "PlayersChannels/AQ_PlayerChannelsFacade.h"
#include <QuestSystem/AQ_QuestManager.h>
#include "QuestSystem/AQ_Quest.h"

#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include <Kismet/KismetMathLibrary.h>

#if WITH_EDITOR
#include "Editor.h"
#endif


UAQ_QuestComponent::UAQ_QuestComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	Owner = GetOwner();
}

UAQ_QuestComponent::~UAQ_QuestComponent()
{
}

void UAQ_QuestComponent::BeginPlay()
{
	Super::BeginPlay();

#if WITH_EDITOR
	/* Return if the play mode is Simulate */
	if (GetWorld()->WorldType == EWorldType::PIE && GEditor->IsSimulateInEditorInProgress())
		return;
#endif

	GetWorld()->OnWorldBeginPlay.AddUObject(this, &UAQ_QuestComponent::LateBeginPlay);
}

void UAQ_QuestComponent::LateBeginPlay()
{	
	/* Get the local Player */
	APawn* localPlayer = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!localPlayer)
		return;

	/* Get the quest manager */
	QuestManager = localPlayer->FindComponentByClass<UAQ_QuestManager>();

	if (QuestMarkerClass)
		CreateQuestMarkerWidget();

	BindFunctionsToQuestDelegates();
}

void UAQ_QuestComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(QuestMarkerWidget && QuestMarkerWidget->IsVisible())
		MarkerFloatingMovement(DeltaTime);
}

void UAQ_QuestComponent::MarkerFloatingMovement(float DeltaTime)
{
	if (!cameraManager)
		cameraManager = GetWorld()->GetFirstLocalPlayerFromController()->PlayerController->PlayerCameraManager;

	if (cameraManager)
	{
		CurrentDelta += DeltaTime;

		float floatingEffect = sin(CurrentDelta * FloatingSpeed) * FloatingAmplitude;

		QuestMarkerWidget->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(QuestMarkerWidget->GetComponentLocation(), cameraManager->GetCameraLocation()));
		QuestMarkerWidget->AddWorldOffset(FVector(0, 0, floatingEffect));
	}
}

void UAQ_QuestComponent::SetQuestMarker(bool isMarkerVisible, bool isQuestValid, EAQ_QuestType QuestState)
{
	/* If no quest to show, set the component to be silent */
	if (isMarkerVisible)
		bIsComponentSilent = false;
	else
		bIsComponentSilent = true;

	OnSleepStateChanged.Broadcast(bIsComponentSilent);

	if (!QuestMarkerClass)
		return;

	UAQ_QuestMarkerWidget* widget = Cast<UAQ_QuestMarkerWidget>(QuestMarkerWidget->GetWidget());

	/* Update the quest marker */
	if (widget)
	{
		QuestMarkerWidget->SetVisibility(isMarkerVisible);
		widget->SetImageQuest(isQuestValid, QuestState);
	}
}

void UAQ_QuestComponent::UpdateQuestMarker()
{
	if (!QuestMarkerClass || !QuestManager)
		return;


	/* If there is no quest we hide the quest Marker and return */
	if (QuestsList.Num() == 0)
	{
		SetQuestMarker(false, false);
		return;
	}


	// SORT 
	bool bIsAnyQuestValid = false;
	bool bIsAnyQuestPending = false;
	TArray<UAQ_Quest*> PendingQuests;
	TArray<UAQ_Quest*> ValidQuests;

	for (auto QuestData : QuestsList)
	{
		/* Query to the QuestManager the quest of the corresponding ID */
		UAQ_Quest* quest = QuestManager->QueryQuest(QuestData.Key);

		if (quest == nullptr)
			continue;

		/* Check if there is any Valid Quests */
		if (QuestData.Value.bIsQuestReceiver && quest->QuestState == EAQ_QuestState::Valid)
		{
			ValidQuests.Add(quest);
			bIsAnyQuestValid = true;
		}
		/* Check if there is any Pending Quests*/
		else if (QuestData.Value.bIsQuestGiver 
			&& quest->QuestState == EAQ_QuestState::Pending 
			&& quest->bIsRequirementMet
			&& !bIsAnyQuestValid)
		{
			PendingQuests.Add(quest);
			bIsAnyQuestPending = true;
		}
	}

	/* Check the Quest Type of the Valid Quests */
	EAQ_QuestType currentType = EAQ_QuestType::Weekly;
	if (bIsAnyQuestValid)
	{
		CheckQuestTypes(ValidQuests, currentType);
		SetQuestMarker(true, true, currentType);
		return;
	}

	/* Check the Quest Type of the Pending Quests */
	if (bIsAnyQuestPending)
	{
		CheckQuestTypes(PendingQuests, currentType);
		SetQuestMarker(true, false, currentType);
		return;
	}

	/* If no Pending nor Valid Quests, hide the Quest Marker */
	SetQuestMarker(false, false);
}

void UAQ_QuestComponent::CheckQuestTypes(TArray<UAQ_Quest*>& ValidQuests, EAQ_QuestType& currentType)
{
	for (auto quests : ValidQuests)
	{
		switch (quests->QuestData->QuestType)
		{
		case EAQ_QuestType::MainQuest:
			currentType = EAQ_QuestType::MainQuest;
			return;

		case EAQ_QuestType::SideQuest:
			currentType = EAQ_QuestType::SideQuest;
			break;

		case EAQ_QuestType::Daily:
		case EAQ_QuestType::Weekly:
		{
			if (currentType != EAQ_QuestType::SideQuest)
				currentType = quests->QuestData->QuestType;
			break;
		}
		}
	}
}

void UAQ_QuestComponent::RerunScript()
{
#if WITH_EDITOR
	AActor* Actor = GetOwner();
	Actor->RerunConstructionScripts();
#endif
}

void UAQ_QuestComponent::Interact(const TScriptInterface<IAQ_PlayerChannelsFacade>& PlayerChannel)
{
	if (QuestMarkerWidget && !QuestMarkerWidget->IsVisible())
		return;

	/* When Interacting with the player, Show only the quest that are:
	- Pending & Requirement is Met & this is the Quest Giver
	- Valid && this is the quest Receiver */
	TArray<UAQ_Quest*> quests;
	for (auto QuestID : QuestsList)
	{
		UAQ_Quest* quest = QuestManager->QueryQuest(QuestID.Key);

		if (quest == nullptr)
			continue;

		if(quest->QuestState == EAQ_QuestState::Pending 
			&& QuestID.Value.bIsQuestGiver)
			quests.Add(quest);

		if (quest->QuestState == EAQ_QuestState::Valid &&
			QuestID.Value.bIsQuestReceiver)
			quests.Add(quest);
	}

	if(PlayerChannel)
		PlayerChannel->OnInteractQuestGiver(quests);
}

void UAQ_QuestComponent::OnQuestStateChangedWrapper(UAQ_Quest* questUpdate, EAQ_QuestState QuestState)
{
	UpdateQuestMarker();
	OnQuestStateChanged.Broadcast(QuestState); // Trigger the blueprint event

	/* If the Quest is now archive, we unbind to the delegates */
	if (questUpdate->QuestState == EAQ_QuestState::Archive)
	{
		/* Unbind only if it's not a daily quest */
		if (questUpdate->QuestData->QuestType != EAQ_QuestType::Daily &&
			questUpdate->QuestData->QuestType != EAQ_QuestType::Weekly)
			questUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestComponent::OnQuestStateChangedWrapper);
	}
}

void UAQ_QuestComponent::OnQuestRequirementMet(UAQ_Quest* quest)
{
	UpdateQuestMarker();

	/* Unbind to the Requirement Met delegate */
	quest->QuestRequirementMetDelegate.RemoveDynamic(this, &UAQ_QuestComponent::OnQuestRequirementMet);
	
	/* Bind to the Quest State Changed delegate*/
	quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChangedWrapper);
}

void UAQ_QuestComponent::BindFunctionsToQuestDelegates()
{
	if (!QuestManager)
		return;

	bool bIsAnyQuestPending = false;
	bool bIsAnyQuestValid = false;

	for (auto QuestData : QuestsList)
	{
		/* Query the quests to the Quest Manager Data Center*/
		UAQ_Quest* newQuest = QuestManager->QueryQuest(QuestData.Key);

		if (newQuest == nullptr)
			continue;

		/* Subscribe to the Quest Requirement Met Delegate if needed */
		if(!newQuest->bIsRequirementMet)
			newQuest->QuestRequirementMetDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestRequirementMet);
		else
		{
			/* Subscribe to the Quest State Changed Delegate if the Quest isn't archived */
			/* Update the Quest Marker */
			switch (newQuest->QuestState)
			{
			case EAQ_QuestState::Valid:
			case EAQ_QuestState::Pending:
			case EAQ_QuestState::Active:
				newQuest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChangedWrapper);
				break;

			default:
				break;
			}

			/* Bind also to QuestStateChangedDelegate if the quest is a daily */
			if (newQuest->QuestData->QuestType == EAQ_QuestType::Daily || 
				newQuest->QuestData->QuestType == EAQ_QuestType::Weekly)
			{
				if(newQuest->QuestState == EAQ_QuestState::Archive)
					newQuest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChangedWrapper);
			}
		}
	}
	
	UpdateQuestMarker();

}

void UAQ_QuestComponent::CreateQuestMarkerWidget()
{
	FVector origin, extent;
	GetOwner()->GetActorBounds(true, origin, extent);


	QuestMarkerWidget = Cast<UWidgetComponent>(GetOwner()->AddComponentByClass(UWidgetComponent::StaticClass(), false, FTransform(), false));

	// Check if the WidgetComponent was successfully added
	if (QuestMarkerWidget)
	{
		QuestMarkerWidget->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
		QuestMarkerWidget->SetWidgetClass(QuestMarkerClass);
		QuestMarkerWidget->SetMaterial(0, QuestMarkerMaterial);
		QuestMarkerWidget->SetWidgetSpace(EWidgetSpace::World);
		QuestMarkerWidget->RegisterComponent();
		QuestMarkerWidget->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		float zCoord = extent.Z * 2 + zOffset;
		QuestMarkerWidget->SetRelativeLocation(FVector(0, 0, zCoord));
		QuestMarkerWidget->SetDrawSize(FVector2D(512.f));
		QuestMarkerWidget->SetWorldScale3D(FVector(.2f));
	}

	SetQuestMarker(false, false);
}