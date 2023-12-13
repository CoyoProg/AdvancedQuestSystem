// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_QuestComponent.h"
#include "PlayersChannels/AQ_QuestChannel.h"
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestData.h"
#include "QuestSystem/AQ_Quest.h"
#include "QuestSystem/AQ_QuestMarkerWidget.h"
#include "Components/WidgetComponent.h"

#include "PlayersChannels/AQ_PlayerChannels.h"

// Sets default values for this component's properties
UAQ_QuestComponent::UAQ_QuestComponent() :
	questMarkerClass(nullptr),
	QuestMarkerWidget(nullptr),
	material(nullptr)
{
	PrimaryComponentTick.bCanEverTick = true;
}

UAQ_QuestComponent::~UAQ_QuestComponent()
{
	questMarkerClass = nullptr;
	QuestMarkerWidget = nullptr;
	material = nullptr;
}

void UAQ_QuestComponent::UpdateQuestMarker()
{
	UAQ_QuestMarkerWidget* widget = Cast<UAQ_QuestMarkerWidget>(QuestMarkerWidget->GetWidget());

	if (widget)
	{
		QuestMarkerWidget->SetVisibility(true);
		widget->SetImageQuest(true);
	}
}

void UAQ_QuestComponent::RerunScript()
{
	AActor* Actor = GetOwner();

	Actor->RerunConstructionScripts();
}

void UAQ_QuestComponent::Interact(UAQ_PlayerChannels* PlayerChannel)
{
	// Show Quest Summarys
	// Select quests
	// Accept to Enable the quest
	// "Terminate" if all objectives of the selected quest are completed to disable the selected quest
	UAQ_BookQuest* bookQuest = PlayerChannel->questChannel->GetWidget();
	bookQuest->DisplayQuestGiverSummary(quests);



	/* TEMPORARY
	It's giving all the quest when interacting for now
	But we need to show the quest
	And let the player accept only the one he wants */
	//if (!IsQuestsEnabled)
	//{
	//	for (auto quest : quests)
	//	{
	//		quest->EnableQuest(PlayerChannel, this);
	//	}
	//
	//	QuestMarkerWidget->SetVisibility(false);
	//	IsQuestsEnabled = true;
	//
	//	return;
	//}
	//
	//for (auto quest : quests)
	//{
	//	if (quest->isAllObjectivesComplet)
	//	{
	//		quest->DisableQuest();
	//		if (QuestMarkerWidget)
	//			QuestMarkerWidget->SetVisibility(false);
	//	}
	//}
}

// Called when the game starts
void UAQ_QuestComponent::BeginPlay()
{
	RerunScript();

	for (auto questData : questsData)
	{
		UAQ_Quest* questTemp = NewObject<UAQ_Quest>(this, UAQ_Quest::StaticClass());
		questTemp->SetQuestData(questData);
		quests.Add(questTemp);
	}

	if (questMarkerClass)
		CreateQuestMarkerWidget();

	Super::BeginPlay();
}

void UAQ_QuestComponent::RemoveComponent()
{
	UnregisterComponent();
	GetOwner()->RemoveOwnedComponent(this);
	DestroyComponent();
}

void UAQ_QuestComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	//if (IsQuestsEnabled)
	//	quest->EndPlay();

	for (auto quest : quests)
	{
		quest->EndPlay();
	}
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

void UAQ_QuestComponent::EnableQuest(UAQ_PlayerChannels* PlayerChannel)
{
	if (QuestMarkerWidget)
		QuestMarkerWidget->SetVisibility(false);

	//quest->EnableQuest(PlayerChannel, this);

	IsQuestsEnabled = true;
}

void UAQ_QuestComponent::DisableQuest(UAQ_PlayerChannels* PlayerChannel)
{
	IsQuestsEnabled = false;

	//quest->DisableQuest();

	// Check if the WidgetComponent exists
	if (QuestMarkerWidget)
	{
		QuestMarkerWidget->UnregisterComponent();
		QuestMarkerWidget = nullptr;
	}

	// If all quest are done
	RemoveComponent();
}