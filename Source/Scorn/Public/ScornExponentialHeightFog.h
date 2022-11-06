#pragma once
#include "CoreMinimal.h"
#include "ScornExponentialHeightFog.generated.h"

class AExponentialHeightFogTemplate;

USTRUCT(BlueprintType)
struct FScornExponentialHeightFog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFogTemplate* StartExpoTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFogTemplate* EndExpoTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebug;
    
    SCORN_API FScornExponentialHeightFog();
};

