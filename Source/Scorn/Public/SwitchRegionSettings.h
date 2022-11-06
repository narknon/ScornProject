#pragma once
#include "CoreMinimal.h"
#include "SwitchRegionSettings.generated.h"

class AActorSwitchBaseRegion;

USTRUCT(BlueprintType)
struct SCORN_API FSwitchRegionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActorSwitchBaseRegion* RegionToSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSwitchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchDuration;
    
    FSwitchRegionSettings();
};

