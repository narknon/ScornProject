#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GlobalEventObserver.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UGlobalEventObserver : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGlobalEventDelegate, const FString&, EventName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalEventDelegate OnGlobalEventTriggered;
    
    UGlobalEventObserver();
    UFUNCTION(BlueprintCallable)
    void Unregister(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    void TriggerGlobalEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    void Register(const FString& EventName);
    
};

