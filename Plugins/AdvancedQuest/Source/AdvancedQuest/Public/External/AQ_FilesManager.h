#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class ADVANCEDQUEST_API AQ_FilesManager
{
public:
	AQ_FilesManager();
	~AQ_FilesManager();

	static void SaveLastQuestID(int identificatorP, const FString& ValueName);
	static int LoadLastQuestID(const FString& ValueName);
};
