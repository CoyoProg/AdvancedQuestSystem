#pragma once

#include "CoreMinimal.h"
#include "PlayersChannels/AQ_Channels.h"
#include "AQ_InventoryChannel.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_InventoryChannel : public UAQ_Channels
{
	GENERATED_BODY()
	
	virtual void OnNotifyEvent_Implementation(UObject* entity) override;
};
