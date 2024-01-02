// Fill out your copyright notice in the Description page of Project Settings.
#include "QuestSystem/AQ_QuestComponent.h"

#include "QuestSystem/AQ_QuestMarkerWidget.h"
#include "PlayersChannels/AQ_PlayerChannels.h"
#include <QuestSystem/AQ_QuestManager.h>

#include "Components/WidgetComponent.h"

// Sets default values for this component's properties
UAQ_QuestComponent::UAQ_QuestComponent() :
	questMarkerClass(nullptr),
	material(nullptr),
	QuestMarkerWidget(nullptr),
	Owner(nullptr)
{
	PrimaryComponentTick.bCanEverTick = true;
	Owner = GetOwner();
}

UAQ_QuestComponent::~UAQ_QuestComponent()
{
	questMarkerClass = nullptr;
	QuestMarkerWidget = nullptr;
	material = nullptr;
	Owner = nullptr;
}

void UAQ_QuestComponent::SetQuestMarker(bool isMarkerVisible, bool isQuestValid)
{
	if (!questMarkerClass)
		return;

	UAQ_QuestMarkerWidget* widget = Cast<UAQ_QuestMarkerWidget>(QuestMarkerWidget->GetWidget());

	if (widget)
	{
		QuestMarkerWidget->SetVisibility(isMarkerVisible);
		widget->SetImageQuest(isQuestValid);
	}
}

void UAQ_QuestComponent::UpdateQuestMarker()
{
	if (quests_Data.Num() == 0)
	{
		SetQuestMarker(false, false);
		return;
	}

	if (!questMarkerClass || !QuestManager)
		return;

	bool isAnyQuestPending = false;

	for (auto questData : quests_Data)
	{
		/* Query the quests to the Quest Manager Data Center*/
		UAQ_Quest* quest = QuestManager->QueryQuest(questData.Key);

		if (questData.Value.isQuestReceiver)
		{
			if (quest->questState == EAQ_QuestState::Valid)
			{
				SetQuestMarker(true, true);
				return;
			}
		}

		if (questData.Value.isQuestGiver)
		{
			if (quest->questState == EAQ_QuestState::Pending && quest->isRequirementMet)
			{
				SetQuestMarker(true, false);
				isAnyQuestPending = true;
			}
		}
	}

	if(!isAnyQuestPending)
		SetQuestMarker(false, false);
}

void UAQ_QuestComponent::RerunScript()
{
	AActor* Actor = GetOwner();

	Actor->RerunConstructionScripts();
}

void UAQ_QuestComponent::Interact(UAQ_PlayerChannels* PlayerChannel)
{
	if (!QuestMarkerWidget->IsVisible())
		return;

	TArray<UAQ_Quest*> quests;
	for (auto questID : quests_Data)
	{
		UAQ_Quest* quest = QuestManager->QueryQuest(questID.Key);

		if(quest->questState == EAQ_QuestState::Pending &&
			quest->isRequirementMet &&
			questID.Value.isQuestGiver)
			quests.Add(quest);

		if (quest->questState == EAQ_QuestState::Valid &&
			questID.Value.isQuestReceiver)
			quests.Add(quest);
	}

	if(PlayerChannel)
		PlayerChannel->OnInteractQuestGiver(quests);
}

void UAQ_QuestComponent::OnQuestStateChanged(UAQ_Quest* questUpdate, EAQ_QuestState QuestState)
{
	UpdateQuestMarker();

	if(questUpdate->questState == EAQ_QuestState::Archive)
		questUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestComponent::OnQuestStateChanged);
}

void UAQ_QuestComponent::OnQuestRequirementMet(UAQ_Quest* quest)
{
	UpdateQuestMarker();

	/* Unsubscribe to the Requirement Met delegate */
	quest->QuestRequirementMetDelegate.RemoveDynamic(this, &UAQ_QuestComponent::OnQuestRequirementMet);
	
	/* Subscribe to the Quest State Changed delegate*/
	quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChanged);

}

void UAQ_QuestComponent::CreateQuests()
{
	if (!QuestManager)
		return;

	for (auto questData : quests_Data)
	{
		/* Query the quests to the Quest Manager Data Center*/
		UAQ_Quest* newQuest = QuestManager->QueryQuest(questData.Key);

		/* Subscribe to the Quest Requirement Met Delegate if needed */
		if(!newQuest->isRequirementMet)
			newQuest->QuestRequirementMetDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestRequirementMet);
		else
		{
			/* Subscribe to the Quest State Changed Delegate if the Quest isn't archived */
			if(newQuest->questState != EAQ_QuestState::Archive)
				newQuest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChanged);
		}

		if (questData.Value.isQuestReceiver)
		{
			if (PlayerChannels)
				PlayerChannels->OnQuestCreated(newQuest);
		}
	}

	UpdateQuestMarker();
}

// Called when the game starts
void UAQ_QuestComponent::BeginPlay()
{
	RerunScript();

	QuestManager = GetWorld()->
		GetFirstPlayerController()->
		GetComponentByClass<UAQ_QuestManager>();

	PlayerChannels = GetWorld()->
		GetFirstPlayerController()->
		GetComponentByClass<UAQ_PlayerChannels>();

	if (questMarkerClass)
		CreateQuestMarkerWidget();

	CreateQuests();

	Super::BeginPlay();
}

void UAQ_QuestComponent::CreateQuestMarkerWidget()
{
	// Check if the owner already has a UWidgetComponent
	QuestMarkerWidget = Cast<UWidgetComponent>(GetOwner()->GetComponentByClass(UWidgetComponent::StaticClass()));

	// If the UWidgetComponent doesn't exist, add it to the owner
	if (!QuestMarkerWidget)
	{
		QuestMarkerWidget = Cast<UWidgetComponent>(GetOwner()->AddComponentByClass(UWidgetComponent::StaticClass(), false, FTransform(), false));

		// Check if the WidgetComponent was successfully added
		if (QuestMarkerWidget)
		{
			QuestMarkerWidget->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
			QuestMarkerWidget->SetWidgetClass(questMarkerClass);
			QuestMarkerWidget->SetMaterial(0, material);
			QuestMarkerWidget->SetWidgetSpace(EWidgetSpace::World);

			QuestMarkerWidget->RegisterComponent();

			FVector origin, extent;
			GetOwner()->GetActorBounds(false, origin, extent);

			QuestMarkerWidget->SetRelativeLocation(FVector(0, 0, extent.Z / 1.5f));
		}
	}
}