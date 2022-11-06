#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldEventObserver.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UWorldEventObserver : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWorldEventDelegateNew, uint8, EventID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWorldEventDelegate, uint8, EventID);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldEventDelegate OnWorldEventTrigger;
    
    UWorldEventObserver();
    UFUNCTION(BlueprintCallable)
    void TriggerWorldEvent(uint8 EventID);
    
    UFUNCTION(BlueprintCallable)
    bool IsWorldEventTriggered(uint8 EventID);
    
    UFUNCTION(BlueprintCallable)
    FString GetTriggeredEventName(uint8 EventID);
    
};

