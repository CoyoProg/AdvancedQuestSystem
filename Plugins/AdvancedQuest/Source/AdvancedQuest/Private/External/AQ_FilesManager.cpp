// Fill out your copyright notice in the Description page of Project Settings.


#include "External/AQ_FilesManager.h"

AQ_FilesManager::AQ_FilesManager()
{
}

AQ_FilesManager::~AQ_FilesManager()
{
}

void AQ_FilesManager::SaveLastQuestID(int LastQuestID)
{
    FString FilePath = FPaths::ProjectDir() + TEXT("LastQuestID.txt");
    FString QuestIDString = FString::Printf(TEXT("%d"), LastQuestID);

    if (FFileHelper::SaveStringToFile(QuestIDString, *FilePath))
    {
        // Successfully saved the quest ID
    }
}

int AQ_FilesManager::LoadLastQuestID()
{
    FString FilePath = FPaths::ProjectDir() + TEXT("LastQuestID.txt");
    FString QuestIDString;
    int LastQuestID = 0;

    if (FFileHelper::LoadFileToString(QuestIDString, *FilePath))
    {
        LastQuestID = FCString::Atoi(*QuestIDString);
    }

    return LastQuestID;
}
