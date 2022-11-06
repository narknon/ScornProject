#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialSource.h"
#include "BaseAudioSource.generated.h"

UCLASS(Abstract, Blueprintable)
class SCORN_API ABaseAudioSource : public ABaseSpatialSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
public:
    ABaseAudioSource();
};

