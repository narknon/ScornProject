#pragma once
#include "CoreMinimal.h"
#include "BaseAudioSource.h"
#include "FMODAudioSource.generated.h"

class UFMODAudioComponent;
class USavableFMODAudioComponent;

UCLASS(Blueprintable)
class SCORN_API AFMODAudioSource : public ABaseAudioSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USavableFMODAudioComponent* AudioComponent;
    
public:
    AFMODAudioSource();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnAudioComponentLoad(float Volume);
    
public:
    UFUNCTION(BlueprintCallable)
    UFMODAudioComponent* GetAudioSourceComponent();
    
};

