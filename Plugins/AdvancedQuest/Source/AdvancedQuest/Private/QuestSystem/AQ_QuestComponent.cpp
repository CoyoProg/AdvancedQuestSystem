// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_QuestComponent.h"
#include "QuestSystem/AQ_QuestData.h"
#include "QuestSystem/AQ_Quest.h"
#include "QuestSystem/AQ_QuestMarkerWidget.h"
#include "Components/WidgetComponent.h"

#include "PlayersChannels/AQ_PlayerChannels.h"

// Sets default values for this component's properties
UAQ_QuestComponent::UAQ_QuestComponent() :
	questMarkerClass(nullptr),
	questData(nullptr),
	WidgetComponent(nullptr),
	VisualWidgetComponent(nullptr)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	quest = CreateDefaultSubobject<UAQ_Quest>(TEXT("Quest"));
}

UAQ_QuestComponent::~UAQ_QuestComponent()
{
}

void UAQ_QuestComponent::UpdateQuestMarker()
{
	UAQ_QuestMarkerWidget* widget = Cast<UAQ_QuestMarkerWidget>(WidgetComponent->GetWidget());

	if (widget)
	{
		widget->SetImageQuest(true);
	}
}

void UAQ_QuestComponent::ShowVisualComponent()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Function Called ?"));

	// Check if the owner already has a UWidgetComponent
	//VisualWidgetComponent = Cast<UWidgetComponent>(GetOwner()->GetComponentByClass(UWidgetComponent::StaticClass()));

	// If the UWidgetComponent doesn't exist, add it to the owner
	if (!VisualWidgetComponent)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Widget Empty"));

		VisualWidgetComponent = Cast<UWidgetComponent>(GetOwner()->AddComponentByClass(UWidgetComponent::StaticClass(), false, FTransform(), false));

		// Check if the WidgetComponent was successfully added
		if (VisualWidgetComponent)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Adding Widget"));


			VisualWidgetComponent->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
			VisualWidgetComponent->SetWidgetClass(questMarkerClass);
			VisualWidgetComponent->SetMaterial(0, material);
			VisualWidgetComponent->SetWidgetSpace(EWidgetSpace::World);

			VisualWidgetComponent->RegisterComponent();

			FVector origin, extent;
			GetOwner()->GetActorBounds(false, origin, extent);

			VisualWidgetComponent->SetRelativeLocation(FVector(0, 0, extent.Z / 1.5f));
		}else
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Cant create Widget"));

	}else
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Widget already exist"));

}

void UAQ_QuestComponent::RemoveVisualComponent()
{
}

void UAQ_QuestComponent::RerunScript()
{
	AActor* Actor = GetOwner();

	Actor->RerunConstructionScripts();
}

void UAQ_QuestComponent::Interact(UAQ_PlayerChannels* PlayerChannel)
{
	if (!IsQuestEnable)
	{
		EnableQuest(PlayerChannel);
		return;
	}

	if (quest->isAllObjectivesComplet)
		DisableQuest(PlayerChannel);
}

// Called when the game starts
void UAQ_QuestComponent::BeginPlay()
{
	RerunScript();	
	
	if (questData)
		SetQuestData();

	if (questMarkerClass && quest)
		CreateQuestMarkerWidget();

	Super::BeginPlay();
}

void UAQ_QuestComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	quest->EndPlay();
}

void UAQ_QuestComponent::SetQuestData()
{
	if (!quest)
		return;

	quest->myData = DuplicateObject<UAQ_QuestData>(questData, this);
}

void UAQ_QuestComponent::CreateQuestMarkerWidget()
{
    // Check if the owner already has a UWidgetComponent
    WidgetComponent = Cast<UWidgetComponent>(GetOwner()->GetComponentByClass(UWidgetComponent::StaticClass()));

    // If the UWidgetComponent doesn't exist, add it to the owner
    if (!WidgetComponent)
    {
        WidgetComponent = Cast<UWidgetComponent>(GetOwner()->AddComponentByClass(UWidgetComponent::StaticClass(), false, FTransform(), false));

        // Check if the WidgetComponent was successfully added
        if (WidgetComponent)
        {
			WidgetComponent->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
			WidgetComponent->SetWidgetClass(questMarkerClass);
			WidgetComponent->SetMaterial(0, material);
			WidgetComponent->SetWidgetSpace(EWidgetSpace::World);

			WidgetComponent->RegisterComponent();

			FVector origin, extent;
			GetOwner()->GetActorBounds(false, origin, extent);

			WidgetComponent->SetRelativeLocation(FVector(0, 0, extent.Z / 1.5f));
        }
    }
}

void UAQ_QuestComponent::EnableQuest(UAQ_PlayerChannels* PlayerChannel)
{
}

void UAQ_QuestComponent::DisableQuest(UAQ_PlayerChannels* PlayerChannel)
{
}


// Called every frame
void UAQ_QuestComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
