#pragma once

#include "CoreMinimal.h"
#include "PlayersChannels/AQ_Channels.h"
#include "AQ_EnvironmentChannel.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_EnvironmentChannel : public UAQ_Channels
{
	GENERATED_BODY()
	
public:
	virtual void OnNotifyEvent_Implementation(UObject* entity) override;
};
