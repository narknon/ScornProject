#pragma once
#include "CoreMinimal.h"
#include "AudioParameterData.generated.h"

USTRUCT(BlueprintType)
struct FAudioParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    SCORNAUDIOMODULE_API FAudioParameterData();
};

