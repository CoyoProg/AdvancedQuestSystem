// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_BookQuest.h"

void UAQ_BookQuest::OpenJournal()
{
	/* Open/Close the Journal */
	bool bIsJournalVisible = JournalWidget->IsVisible();

	CloseAll();

	if (!bIsJournalVisible)
	{
		if (PlayerController)
		{
			PlayerController->SetShowMouseCursor(true);
			PlayerController->SetInputMode(FInputModeUIOnly{});
		}

		SetKeyboardFocus();
		JournalWidget->SetVisibility(ESlateVisibility::Visible);
		return;
	}

	if (PlayerController)
	{
		PlayerController->SetShowMouseCursor(false);
		PlayerController->SetInputMode(FInputModeGameOnly{});
	}
}

void UAQ_BookQuest::OpenQuestGiverSummary()
{
	CloseAll();

	/* Open the Quest Giver Summary */
	QuestGiverWidget->SetVisibility(ESlateVisibility::Visible);
	PlayerController->SetInputMode(FInputModeUIOnly{});

	if (PlayerController)
	{
		PlayerController->SetShowMouseCursor(true);
		PlayerController->SetIgnoreMoveInput(true);
	}
}

void UAQ_BookQuest::CloseAll()
{
	/* Close all the widgets */
	JournalWidget->SetVisibility(ESlateVisibility::Collapsed);
	QuestGiverWidget->SetVisibility(ESlateVisibility::Collapsed);
}

void UAQ_BookQuest::OnQuestEnableBroadcast(UAQ_Quest* quest)
{
	if (OnQuestEnableDelegate.IsBound())
		OnQuestEnableDelegate.Broadcast(quest);
}
