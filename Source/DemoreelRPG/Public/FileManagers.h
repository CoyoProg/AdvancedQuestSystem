// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class DEMOREELRPG_API FileManagers
{
public:
	FileManagers();
	~FileManagers();

	static void SaveLastQuestID(int LastQuestID);
	static int LoadLastQuestID();
};
