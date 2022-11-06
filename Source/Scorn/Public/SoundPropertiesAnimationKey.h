#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialAnimationKey.h"
#include "SoundProperties.h"
#include "SoundPropertiesAnimationKey.generated.h"

UCLASS(Blueprintable)
class SCORN_API ASoundPropertiesAnimationKey : public ABaseSpatialAnimationKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchKey;
    
    ASoundPropertiesAnimationKey();
    UFUNCTION(BlueprintCallable)
    void SetVolume(const float& inVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(const float& inPitch);
    
    UFUNCTION(BlueprintCallable)
    void SetHighFrequencyGainMultiplier(const float& inHighFrequencyGainMultiplier);
    
};

