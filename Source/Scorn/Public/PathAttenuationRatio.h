#pragma once
#include "CoreMinimal.h"
#include "PathAttenuationRatio.generated.h"

USTRUCT(BlueprintType)
struct FPathAttenuationRatio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverridePathAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathDistanceRatio;
    
    SCORN_API FPathAttenuationRatio();
};

