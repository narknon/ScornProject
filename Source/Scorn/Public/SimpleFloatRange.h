#pragma once
#include "CoreMinimal.h"
#include "SimpleFloatRange.generated.h"

USTRUCT(BlueprintType)
struct FSimpleFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float High;
    
    SCORN_API FSimpleFloatRange();
};

