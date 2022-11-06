#pragma once
#include "CoreMinimal.h"
#include "ScornSkyLight.h"
#include "SkyLightSources.generated.h"

USTRUCT(BlueprintType)
struct FSkyLightSources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornSkyLight SkyLight;
    
    SCORN_API FSkyLightSources();
};

