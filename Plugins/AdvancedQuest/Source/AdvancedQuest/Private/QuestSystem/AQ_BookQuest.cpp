// Copyright 2024, Coyo Prog, All rights reserved.


#include "QuestSystem/AQ_BookQuest.h"

void UAQ_BookQuest::OpenQuestLog()
{
	/* Open/Close the Journal */
	bool bIsJournalVisible = QuestLogWidget->IsVisible();

	CloseAll();

	if (bIsJournalVisible)
	{
		PlayerController->SetInputMode(FInputModeGameOnly{});
		return;
	}

	if (!PlayerController)
		return;

	PlayerController->SetInputMode(FInputModeUIOnly{});
	PlayerController->SetShowMouseCursor(true);

	QuestLogWidget->SetVisibility(ESlateVisibility::Visible);
	QuestLogWidget->SetKeyboardFocus();
}

void UAQ_BookQuest::OpenQuestGiverSummary()
{
	CloseAll();

	if (!PlayerController)
		return;

	PlayerController->SetInputMode(FInputModeUIOnly{});
	PlayerController->SetShowMouseCursor(true);
	PlayerController->SetIgnoreMoveInput(true);

	/* Open the Quest Giver Summary */
	QuestGiverWidget->SetVisibility(ESlateVisibility::Visible);
	QuestGiverWidget->SetKeyboardFocus();	
}

void UAQ_BookQuest::CloseAll()
{
	/* Close all the widgets */
	QuestLogWidget->SetVisibility(ESlateVisibility::Collapsed);
	QuestGiverWidget->SetVisibility(ESlateVisibility::Collapsed);

	if (!PlayerController)
		return;

	PlayerController->SetShowMouseCursor(false);
	PlayerController->SetIgnoreMoveInput(false);

}

void UAQ_BookQuest::OnQuestEnableBroadcast(UAQ_Quest* quest)
{
	if (OnQuestEnableDelegate.IsBound())
		OnQuestEnableDelegate.Broadcast(quest);
}
