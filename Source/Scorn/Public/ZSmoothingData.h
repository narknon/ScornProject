#pragma once
#include "CoreMinimal.h"
#include "EZSmoothingMethod.h"
#include "ZSmoothingData.generated.h"

USTRUCT(BlueprintType)
struct FZSmoothingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZSmoothingMethod MeshZTransformationSmoothingMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshZTransformationEMAAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshZTransformationCompressionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshZTransformationCompressionMultiplier;
    
    SCORN_API FZSmoothingData();
};

