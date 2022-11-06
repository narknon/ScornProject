#pragma once
#include "CoreMinimal.h"
#include "ScornOcclusionDetails.generated.h"

USTRUCT(BlueprintType)
struct FScornOcclusionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> OcclusionTagValues;
    
    SCORN_API FScornOcclusionDetails();
};

