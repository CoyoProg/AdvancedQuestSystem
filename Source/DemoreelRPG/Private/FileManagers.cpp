// Fill out your copyright notice in the Description page of Project Settings.


#include "FileManagers.h"
#include "Engine/Engine.h" // Include the correct module header

FileManagers::FileManagers()
{
}

FileManagers::~FileManagers()
{
}

// Function to load the last assigned quest ID from an INI file
int FileManagers::LoadLastQuestID()
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

// Function to save the last assigned quest ID to an INI file
void FileManagers::SaveLastQuestID(int LastQuestID)
{
    FString FilePath = FPaths::ProjectDir() + TEXT("LastQuestID.txt");
    FString QuestIDString = FString::Printf(TEXT("%d"), LastQuestID);

    if (FFileHelper::SaveStringToFile(QuestIDString, *FilePath))
    {
        // Successfully saved the quest ID
    }
}