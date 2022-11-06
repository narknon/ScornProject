#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELevelStreamingManagerState.h"
#include "GlobalStreamingManager.generated.h"

class AActorSwitchBaseRegion;
class ALevelStreamingManager;

UCLASS(Blueprintable)
class SCORN_API AGlobalStreamingManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamsDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnBeginPlayStreamingDone;
    
    AGlobalStreamingManager();
    UFUNCTION(BlueprintCallable)
    void PrepareForLevelStreamingInit();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorSwitchRegionFinishedSwitching(AActorSwitchBaseRegion* Region);
    
    UFUNCTION(BlueprintCallable)
    void HandleStreamingManagerStateChange(ALevelStreamingManager* Manager, const ELevelStreamingManagerState& PreviousState, const ELevelStreamingManagerState& NextState);
    
};

