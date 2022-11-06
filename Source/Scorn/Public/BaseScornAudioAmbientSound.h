#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "BaseScornAudioAmbientSound.generated.h"

class UFMODAudioComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseScornAudioAmbientSound : public ASavableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    ABaseScornAudioAmbientSound();
};

