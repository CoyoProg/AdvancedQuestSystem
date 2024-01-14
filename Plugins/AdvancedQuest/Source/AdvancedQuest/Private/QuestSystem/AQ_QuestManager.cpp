#include "QuestSystem/AQ_QuestManager.h"
#include <AssetRegistry/AssetRegistryModule.h>

#include <QuestSystem/AQ_Quest.h>
#include <PlayersChannels/AQ_PlayerChannels.h>

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include <Kismet/KismetSystemLibrary.h>

UAQ_QuestManager::UAQ_QuestManager()
{
	PrimaryComponentTick.bCanEverTick = true;
	bWantsInitializeComponent = true;
}

void UAQ_QuestManager::InitializeComponent()
{
	/* Get the Asset RegistryModule */
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	/* Get all the Quest Data within the PLUGIN FOLDER */
	FTopLevelAssetPath assetPath = UKismetSystemLibrary::MakeTopLevelAssetPath("/Script/AdvancedQuest", "AQ_QuestData");
	TArray<FAssetData> QuestDataAssets;
	AssetRegistry.GetAssetsByClass(assetPath, QuestDataAssets, true);

	/* Create a quest for each Quest Data found */
	for (auto assets : QuestDataAssets)
	{
		UAQ_QuestData* QuestData = Cast<UAQ_QuestData>(assets.GetAsset());

		if (!QuestData)
			return;

		UAQ_Quest* newQuest = NewObject<UAQ_Quest>(this, UAQ_Quest::StaticClass());
		newQuest->SetQuestData(QuestData);

		int QuestID = QuestData->QuestID;

		/* Add the quest in QuestDataCenter with it's ID as key to retrieve it easily*/
		QuestDataCenter.Add(QuestID, newQuest);
	}

	/* Load the save to update all the Objectives & current state for each quests */
	LoadQuestData(); // This function is implemented in blueprint
}

void UAQ_QuestManager::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->OnWorldBeginPlay.AddUObject(this, &UAQ_QuestManager::LateBeginPlay);
	SetPlayerInputComponent();
}

void UAQ_QuestManager::LateBeginPlay()
{
	/* Get the Player Channels component */
	UAQ_PlayerChannels* playerChannels = GetOwner()->GetComponentByClass<UAQ_PlayerChannels>();

	/* Generate an array with all the quests in the QuestDataCenter */
	TArray<UAQ_Quest*> temporaryQuests;
	QuestDataCenter.GenerateValueArray(temporaryQuests);

	/* Call On Quest Created for each quests */
	for (auto quests : temporaryQuests)
	{
		/* According to the state of each quests, the Player Channels will update
		the Quest channel and its book quest, and Functions will be bind to delegates */
		playerChannels->OnQuestCreated(quests);
	}
}

UAQ_Quest* UAQ_QuestManager::QueryQuest(int QuestID)
{
	/* Find the Quest corresponding to the ID */
	if (QuestDataCenter.Find(QuestID))
		return QuestDataCenter[QuestID];

	UE_LOG(LogTemp, Warning, TEXT("THERE IS NO QUEST WITH %i ID"), QuestID);
	return nullptr;
}

void UAQ_QuestManager::SetPlayerInputComponent()
{
	UInputComponent* PlayerInputComponent = GetWorld()->GetFirstPlayerController()->InputComponent;

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Save Quests
		EnhancedInputComponent->BindAction(SaveQuestsAction, ETriggerEvent::Started, this, &UAQ_QuestManager::SaveQuestData);
	}
}
