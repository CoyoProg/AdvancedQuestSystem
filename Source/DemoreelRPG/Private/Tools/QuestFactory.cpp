// Fill out your copyright notice in the Description page of Project Settings.


#include "Tools/QuestFactory.h"
#include "QuestSystem/Quest.h"

UQuestFactory::UQuestFactory()
{
    SupportedClass = UQuest::StaticClass();
}

UObject* UQuestFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    if (Class && InParent)
    {
        UQuest* NewAsset = NewObject<UQuest>(InParent, Class, Name, Flags);
        return NewAsset;
    }

    return nullptr;
}
