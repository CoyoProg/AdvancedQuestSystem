// Fill out your copyright notice in the Description page of Project Settings.

#include "Tools/CreateAssets.h"				

#include "AssetToolsModule.h"				//AssetTools (Editor only)

#include "Tools/QuestFactory.h"
#include "QuestSystem/Quest.h"
#include "Factories/WorldFactory.h"			//UnrealEd   (Editor only)
#include "Factories/MaterialFactoryNew.h"	//UnrealEd   (Editor only)
#include "FileManagers.h"

int UCreateAssets::AssignUniqueQuestID()
{
	int LastQuestID = FileManagers::LoadLastQuestID();
	int NewQuestID = LastQuestID + 1;

	// Save the new LastQuestID
	FileManagers::SaveLastQuestID(NewQuestID);

	return NewQuestID;
}
