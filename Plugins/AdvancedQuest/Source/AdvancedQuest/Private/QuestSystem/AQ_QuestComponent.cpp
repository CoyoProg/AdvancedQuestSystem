// Fill out your copyright notice in the Description page of Project Settings.
#include "QuestSystem/AQ_QuestComponent.h"

#include "QuestSystem/AQ_QuestMarkerWidget.h"
#include "PlayersChannels/AQ_PlayerChannels.h"
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

		/* Pass the quest from the Giver to the Receiver */
	case EAQ_QuestState::Valid:
	{
		/* Check if this component is the quest Receiver */
		AActor* questReceiver = questUpdate->GetQuestReceiver();
		if (questReceiver != Owner)
		{
			/* If not we remove the quest and the Event Listener from this Component */
			questUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestComponent::OnQuestStateChanged);
			RemoveQuestFromArray(questUpdate);

			/* And add the quest to the quest Receiver*/
			UAQ_QuestComponent* questComponent = questReceiver->GetComponentByClass<UAQ_QuestComponent>();
			questUpdate->QuestStateChangedDelegate.AddDynamic(questComponent, &UAQ_QuestComponent::OnQuestStateChanged);
			questComponent->quests.Add(questUpdate);
			questComponent->UpdateQuestMarker();
		}

		break;
	}

		/* Pass the quest from the Receiver to the Giver */
	case EAQ_QuestState::Pending:
	{
		/* Check if this component is the quest Giver */
		AActor* questGiver = questUpdate->GetQuestGiver();
		if (questGiver != Owner)
		{
			/* If not we remove the quest and the Event Listener from this Component */
			questUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestComponent::OnQuestStateChanged);
			RemoveQuestFromArray(questUpdate);

			/* And add back the quest to the original quest Giver*/
			UAQ_QuestComponent* questComponent = questGiver->GetComponentByClass<UAQ_QuestComponent>();
			questUpdate->QuestStateChangedDelegate.AddDynamic(questComponent, &UAQ_QuestComponent::OnQuestStateChanged);
			questComponent->quests.Add(questUpdate);
			questComponent->UpdateQuestMarker();
		}
		break;

		// Note: Pending is only called when a quest is reset to its initial State.
	}

	case EAQ_QuestState::Archive:
		RemoveQuestFromArray(questUpdate);
		break;
	}

	UpdateQuestMarker();
}

void UAQ_QuestComponent::OnQuestRequirementMet(UAQ_Quest* quest)
{
	UpdateQuestMarker();

	quest->QuestRequirementMetDelegate.RemoveDynamic(this, &UAQ_QuestComponent::OnQuestRequirementMet);
}

void UAQ_QuestComponent::CreateQuests()
{
	for (auto questData : quests_DataReceiver)
	{
		/* Get the quest in the Quest Center with the ID */
		UAQ_Quest* newQuest = NewObject<UAQ_Quest>(this, UAQ_Quest::StaticClass());
		newQuest->SetQuestData(questData.Key);

		UAQ_QuestComponent* questReceiver = questData.Value->GetComponentByClass<UAQ_QuestComponent>();
		newQuest->SetQuestReceiver(questReceiver->GetOwner());
		newQuest->SetQuestGiver(Owner);

		newQuest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChanged);
		if(!newQuest->isRequirementMet)
			newQuest->QuestRequirementMetDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestRequirementMet);

		quests.Add(newQuest);

		UAQ_PlayerChannels* playerChannels = GetWorld()->
			GetFirstPlayerController()->
			GetPawn()->
			GetComponentByClass<UAQ_PlayerChannels>();
		
		if(playerChannels)
			playerChannels->OnQuestCreated(newQuest);
	}

	UpdateQuestMarker();
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

	CreateQuests();

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