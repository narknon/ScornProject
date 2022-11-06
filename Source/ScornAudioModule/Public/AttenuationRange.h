#pragma once
#include "CoreMinimal.h"
#include "AttenuationRange.generated.h"

USTRUCT(BlueprintType)
struct FAttenuationRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    SCORNAUDIOMODULE_API FAttenuationRange();
};

