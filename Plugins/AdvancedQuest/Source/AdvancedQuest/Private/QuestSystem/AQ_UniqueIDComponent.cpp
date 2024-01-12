#include "QuestSystem/AQ_UniqueIDComponent.h"
#include "Tools/AQ_CreateAssets.h"

UAQ_UniqueIDComponent::UAQ_UniqueIDComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UAQ_UniqueIDComponent::GenerateUniqueID()
{
	UniqueID = UAQ_CreateAssets::AssignUniqueID("LastUniqueActorID");
}