#include "QuestSystem/AQ_QuestComponent.h"

#include "QuestSystem/AQ_QuestMarkerWidget.h"
#include "PlayersChannels/AQ_PlayerChannelsFacade.h"
#include <QuestSystem/AQ_QuestManager.h>
#include "QuestSystem/AQ_Quest.h"

#include "Components/WidgetComponent.h"

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

	if (GetWorld()->WorldType == EWorldType::PIE && GEditor->IsSimulateInEditorInProgress())
		return;

	if (QuestMarkerClass)
		CreateQuestMarkerWidget();

	QuestManager = GetWorld()->
		GetFirstPlayerController()->GetPawn()->
		GetComponentByClass<UAQ_QuestManager>();

	GetWorld()->OnWorldBeginPlay.AddUObject(this, &UAQ_QuestComponent::LateBeginPlay);
}

void UAQ_QuestComponent::LateBeginPlay()
{	
	BindFunctionsToQuestDelegates();
}

void UAQ_QuestComponent::SetQuestMarker(bool isMarkerVisible, bool isQuestValid)
{
	if (isMarkerVisible)
		bIsComponentSilent = false;
	else
		bIsComponentSilent = true;

	if (!QuestMarkerClass)
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
	if (!QuestMarkerClass || !QuestManager)
		return;

	/* If there is no quest we hide the quest Marker and return */
	if (QuestsList.Num() == 0)
	{
		SetQuestMarker(false, false);
		return;
	}

	bool bIsAnyQuestPending = false;
	for (auto QuestData : QuestsList)
	{
		/* Query to the QuestManager the quest of the corresponding ID */
		UAQ_Quest* quest = QuestManager->QueryQuest(QuestData.Key);

		if (quest == nullptr)
			continue;

		/* Check if any quest is valid, and if this is the QuestReceiver */
		if (QuestData.Value.bIsQuestReceiver)
		{
			if (quest->QuestState == EAQ_QuestState::Valid)
			{
				SetQuestMarker(true, true);
				return;
			}
		}

		/* If none, check if any quest is pending and if this is the QuestGiver */
		if (QuestData.Value.bIsQuestGiver)
		{
			if (quest->QuestState == EAQ_QuestState::Pending && quest->bIsRequirementMet)
			{
				SetQuestMarker(true, false);
				bIsAnyQuestPending = true;
			}
		}
	}

	/* Update the Quest Marker accordingly */
	if(!bIsAnyQuestPending)
		SetQuestMarker(false, false);
}

void UAQ_QuestComponent::RerunScript()
{
	AActor* Actor = GetOwner();

	Actor->RerunConstructionScripts();
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

		if(quest->QuestState == EAQ_QuestState::Pending &&
			quest->bIsRequirementMet &&
			QuestID.Value.bIsQuestGiver)
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
	if(questUpdate->QuestState == EAQ_QuestState::Archive)
		questUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_QuestComponent::OnQuestStateChangedWrapper);
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
			{
				if (QuestData.Value.bIsQuestReceiver)
					bIsAnyQuestValid = true;

				newQuest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChangedWrapper);
				break;
			}

			case EAQ_QuestState::Pending:
			{
				if (QuestData.Value.bIsQuestGiver)
					bIsAnyQuestPending = true;

				newQuest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChangedWrapper);
				break;
			}
				
			case EAQ_QuestState::Active:
			{
				newQuest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_QuestComponent::OnQuestStateChangedWrapper);
				break;
			}

			default:
				break;
			}

			if(bIsAnyQuestValid)
				SetQuestMarker(true, true);
			else if(bIsAnyQuestPending)
				SetQuestMarker(true, false);
		}
	}
}

void UAQ_QuestComponent::CreateQuestMarkerWidget()
{
	FVector origin, extent;
	GetOwner()->GetActorBounds(false, origin, extent);

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
			QuestMarkerWidget->SetWidgetClass(QuestMarkerClass);
			QuestMarkerWidget->SetMaterial(0, QuestMarkerMaterial);
			QuestMarkerWidget->SetWidgetSpace(EWidgetSpace::World);
			QuestMarkerWidget->RegisterComponent();
			QuestMarkerWidget->SetCollisionEnabled(ECollisionEnabled::NoCollision);

			float pixelToCm = QuestMarkerWidget->GetDrawSize().Y / 8.f; // Adjust this value if you have another Quest Marker
			float zCoord = extent.Z * 2 + pixelToCm;
			QuestMarkerWidget->SetRelativeLocation(FVector(0, 0, zCoord));
		}
	}
	else
		QuestMarkerWidget->SetWidgetClass(QuestMarkerClass);

	SetQuestMarker(false, false);
}