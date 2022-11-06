#pragma once
#include "CoreMinimal.h"
#include "GameplaySavableActor.h"
#include "BaseSwitch.generated.h"

class ASwitchSoundPropertiesKey;

UCLASS(Blueprintable)
class SCORN_API ABaseSwitch : public AGameplaySavableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ASwitchSoundPropertiesKey>> SwitchKeySoftRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ASwitchSoundPropertiesKey>> SwitchKeyOppositeSoftRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASwitchSoundPropertiesKey*> SoundKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASwitchSoundPropertiesKey*> SoundKeysOpposite;
    
public:
    ABaseSwitch();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimateSoundKeysOpposite(float TargetVolume, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimateSoundKeys(float TargetVolume, float Time);
    
};

