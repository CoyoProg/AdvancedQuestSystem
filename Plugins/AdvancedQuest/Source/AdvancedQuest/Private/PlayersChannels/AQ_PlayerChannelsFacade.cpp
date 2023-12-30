// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_PlayerChannelsFacade.h"

void IAQ_PlayerChannelsFacade::OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState)
{
	FString DebugMessage = FString::Printf(TEXT("Facade"));
	float TimeToDisplay = 5.0f;
	FColor TextColor = FColor::Green;

	GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, TextColor, DebugMessage);
}

void IAQ_PlayerChannelsFacade::OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay)
{
}
