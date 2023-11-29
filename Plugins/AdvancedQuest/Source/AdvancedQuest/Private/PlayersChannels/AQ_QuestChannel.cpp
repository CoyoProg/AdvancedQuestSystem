// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_QuestChannel.h"
#include "QuestSystem/AQ_BookQuest.h"

#include "Components/WidgetComponent.h"

UAQ_QuestChannel::UAQ_QuestChannel()
{

}

UAQ_QuestChannel::~UAQ_QuestChannel()
{
}

void UAQ_QuestChannel::AddWidgetToViewport(AActor* ownerP)
{
	if (!bookQuestWidgetClass)
		return;

	APlayerController* PlayerController = nullptr;
	APawn* Pawn = Cast<APawn>(ownerP);
	if (Pawn)
		PlayerController = Cast<APlayerController>(Pawn->GetController());

	bookQuest = CreateWidget<UAQ_BookQuest>(PlayerController, bookQuestWidgetClass);
	if (bookQuest)
		bookQuest->AddToViewport();
}
