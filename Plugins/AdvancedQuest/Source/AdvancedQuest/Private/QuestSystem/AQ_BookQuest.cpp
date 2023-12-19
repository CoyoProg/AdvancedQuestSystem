// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_BookQuest.h"

void UAQ_BookQuest::OpenJournal()
{
	if (!JournalWidget->IsVisible())
		JournalWidget->SetVisibility(ESlateVisibility::Visible); 
	else
		JournalWidget->SetVisibility(ESlateVisibility::Hidden);

	QuestGiverWidget->SetVisibility(ESlateVisibility::Hidden);
}

void UAQ_BookQuest::OpenQuestGiverSummary()
{
	QuestGiverWidget->SetVisibility(ESlateVisibility::Visible);


	JournalWidget->SetVisibility(ESlateVisibility::Hidden);
}

void UAQ_BookQuest::CloseAll()
{
	if (JournalWidget->IsVisible())
		JournalWidget->SetVisibility(ESlateVisibility::Hidden);

	if (QuestGiverWidget->IsVisible())
		QuestGiverWidget->SetVisibility(ESlateVisibility::Hidden);
}
