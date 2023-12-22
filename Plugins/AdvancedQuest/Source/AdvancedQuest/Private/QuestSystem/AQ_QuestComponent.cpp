// Fill out your copyright notice in the Description page of Project Settings.
#include "QuestSystem/AQ_QuestComponent.h"

#include "QuestSystem/AQ_QuestMarkerWidget.h"
#include "PlayersChannels/AQ_PlayerChannelsFacade.h"
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
	if (!questMarkerClass)
		return;

	bool isAnyQuestPending = false;

	for (auto quest : quests)
	{
		if (quest->GetQuestReceiver() == Owner)
		{
			if (quest->questState == EAQ_QuestState::Valid)
			{
				SetQuestMarker(true, true);
				return;
			}
		}

		if (quest->GetQuestGiver() == Owner)
		{
			if (quest->questState == EAQ_QuestState::Pending)
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

void UAQ_QuestComponent::Interact(const TScriptInterface<IAQ_PlayerChannelsFacade>& PlayerChannel)
{
	if (!QuestMarkerWidget->IsVisible())
		return;

	PlayerChannel->OnInteractQuestGiver(quests);
}

void UAQ_QuestComponent::RemoveQuestFromArray(UAQ_Quest* questToRemove)
{
	quests.Remove(questToRemove);
}

void UAQ_QuestComponent::OnQuestStateChanged(UAQ_Quest* questUpdate, EAQ_QuestState QuestState)
{
	switch (QuestState)
	{
	case EAQ_QuestState::Active:
		break;
	case EAQ_QuestState::Valid:
		break;
	case EAQ_QuestState::Pending:
		break;
	case EAQ_QuestState::Archive:
		RemoveQuestFromArray(questUpdate);
		break;
	}

	UpdateQuestMarker();
}

TArray<UAQ_Quest*> UAQ_QuestComponent::CreateQuests()
{
	for (auto questData : quests_DataReceiver)
	{
		if (questData.Key->isImplemented)
			continue;

		UAQ_Quest* newQuest = NewObject<UAQ_Quest>(this, UAQ_Quest::StaticClass());
		newQuest->SetQuestData(questData.Key);

		UAQ_QuestComponent* questReceiver = questData.Value->GetComponentByClass<UAQ_QuestComponent>();
		newQuest->SetQuestReceiver(questReceiver->GetOwner());
		newQuest->SetQuestGiver(Owner);

		if(questReceiver != this)
			newQuest->QuestStateChangedDelegate.AddDynamic(questReceiver, &UAQ_QuestComponent::OnQuestStateChanged);

		newQuest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChanged);
		quests.Add(newQuest);

		if (questReceiver != this)
			questReceiver->quests.Add(newQuest);
	}

	UpdateQuestMarker();
	return quests;
}

// Called when the game starts
void UAQ_QuestComponent::BeginPlay()
{
	RerunScript();

	if (questMarkerClass)
	{
		CreateQuestMarkerWidget();
		UpdateQuestMarker();
	}

	Super::BeginPlay();
}

void UAQ_QuestComponent::RemoveComponent()
{
	UnregisterComponent();
	GetOwner()->RemoveOwnedComponent(this);
	DestroyComponent();
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