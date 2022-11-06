#pragma once
#include "CoreMinimal.h"
#include "ScornSkyLight.generated.h"

class ASkyLightTemplate;

USTRUCT(BlueprintType)
struct FScornSkyLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyLightTemplate* StartSkylightTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyLightTemplate* EndSkylightTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebug;
    
    SCORN_API FScornSkyLight();
};

