#pragma once
#include "CoreMinimal.h"

#include "PlayersChannels/AQ_Channels.h"
#include "Enums/AQ_RequiermentEventType.h"

#include "AQ_QuestChannel.generated.h"

class UAQ_Quest;
class UAQ_BookQuest;
class UAQ_QuestComponent;
class IAQ_PlayerChannelsFacade;
class UWidgetComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestRequirementChangedDelegate, int, QuestID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelRequirementChangedDelegate, int, PlayerLevel);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_QuestChannel : public UAQ_Channels
{
	GENERATED_BODY()

public:
	/* Widget */
	TSubclassOf<UUserWidget> BookQuestWidgetClass;
	void SetWidgetClass(TSubclassOf<UUserWidget> widgetClass, AActor* owner) { BookQuestWidgetClass = widgetClass; OwnerWidget = owner; }
	void AddWidgetToViewport();

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	UAQ_BookQuest* BookQuest = nullptr;


	/* Events */
	void OnPlayerLevelChange(int newLevel);

	/* Delegates */
	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState);

	UFUNCTION()
	void OnQuestUpdate(UAQ_Quest* QuestUpdate);

	UFUNCTION()
	void OnQuestRequirementMet(UAQ_Quest* quest);

	FQuestRequirementChangedDelegate QuestRequirementChangedDelegate;
	FLevelRequirementChangedDelegate LevelRequirementChangedDelegate;


	/* References */
private:
	AActor* OwnerWidget = nullptr;
};
