#pragma once
#include "CoreMinimal.h"
#include "MorphTargetData.generated.h"

USTRUCT(BlueprintType)
struct FMorphTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    SCORN_API FMorphTargetData();
};

