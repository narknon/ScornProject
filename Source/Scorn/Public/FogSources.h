#pragma once
#include "CoreMinimal.h"
#include "ScornExponentialHeightFog.h"
#include "FogSources.generated.h"

USTRUCT(BlueprintType)
struct FFogSources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornExponentialHeightFog ExponentialFog;
    
    SCORN_API FFogSources();
};

