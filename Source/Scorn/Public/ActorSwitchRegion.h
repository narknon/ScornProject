#pragma once
#include "CoreMinimal.h"
#include "ActorSwitchBaseRegion.h"
#include "UObject/NoExportTypes.h"
#include "ActorSwitchRegion.generated.h"

class ALevelStreamingManager;
class AActorRegionSegment;

UCLASS(Blueprintable)
class SCORN_API AActorSwitchRegion : public AActorSwitchBaseRegion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ALevelStreamingManager>> LevelStreamingCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActorRegionSegment*> RegionSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
public:
    AActorSwitchRegion();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSegmentsColor(const FColor& Color);
    
};

