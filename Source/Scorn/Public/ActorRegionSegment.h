#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorRegionSegment.generated.h"

class UActorSwitchTriggerComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class SCORN_API AActorRegionSegment : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Trigger;
    
    AActorRegionSegment();
    UFUNCTION(BlueprintCallable)
    bool CheckIsInSegment(UActorSwitchTriggerComponent* SwitchComponent);
    
};

