// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_BookQuest.h"

void UAQ_BookQuest::OpenJournal()
{
	/* Open/Close the Journal */
	if (!JournalWidget->IsVisible())
		JournalWidget->SetVisibility(ESlateVisibility::Visible); 
	else
		JournalWidget->SetVisibility(ESlateVisibility::Hidden);

	/* Close the other widget */
	QuestGiverWidget->SetVisibility(ESlateVisibility::Hidden);
}

void UAQ_BookQuest::OpenQuestGiverSummary()
{
	/* Open the Quest Giver Summary */
	QuestGiverWidget->SetVisibility(ESlateVisibility::Visible);

	/* Close the other widget */
	JournalWidget->SetVisibility(ESlateVisibility::Hidden);
}

void UAQ_BookQuest::CloseAll()
{
	/* Close all the widgets */
	if (JournalWidget->IsVisible())
		JournalWidget->SetVisibility(ESlateVisibility::Hidden);

	if (QuestGiverWidget->IsVisible())
		QuestGiverWidget->SetVisibility(ESlateVisibility::Hidden);
}
