// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_QuestChannel.h"
#include "QuestSystem/AQ_BookQuest.h"

#include "Components/WidgetComponent.h"

void UAQ_QuestChannel::AddWidgetToViewport()
{
	if (!bookQuestWidgetClass)
		return;

	APlayerController* PlayerController = nullptr;

	APawn* Pawn = Cast<APawn>(Owner);
	if (!Pawn)
		return;

	PlayerController = Cast<APlayerController>(Pawn->GetController());
	
	bookQuest = CreateWidget<UAQ_BookQuest>(PlayerController, bookQuestWidgetClass);
	if (!bookQuest)
		return;

	bookQuest->AddToViewport();
}
