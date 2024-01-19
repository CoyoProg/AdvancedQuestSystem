#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "ObserverPattern/AQ_Subject.h"

#include "AQ_Channels.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_Channels : public UObject, public IAQ_Subject
{
	GENERATED_BODY()
	
public:
	~UAQ_Channels();

	virtual void AddObserver_Implementation(UObject* observerP) override;
	virtual void RemoveObserver_Implementation(UObject* observerP) override;
	virtual void NotifyObservers_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP, float amount = 1) override;

	void ClearObservers() { Observers.Empty(); }
private:
	TArray<UObject*> Observers;
};
