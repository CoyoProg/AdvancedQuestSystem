// Fill out your copyright notice in the Description page of Project Settings.

#include "Tools/CreateAssets.h"				

#include "QuestSystem/Quest.h"
#include "FileManagers.h"

int UCreateAssets::AssignUniqueQuestID()
{
	int LastQuestID = FileManagers::LoadLastQuestID();
	int NewQuestID = LastQuestID + 1;

	// Save the new LastQuestID
	FileManagers::SaveLastQuestID(NewQuestID);

	return NewQuestID;
}
