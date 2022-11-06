#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScornAudioAmbientSound.generated.h"

class UFMODAudioComponent;

UCLASS(Blueprintable)
class SCORNAUDIOMODULE_API AScornAudioAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    AScornAudioAmbientSound();
};

