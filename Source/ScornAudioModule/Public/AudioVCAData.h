#pragma once
#include "CoreMinimal.h"
#include "AudioVCAData.generated.h"

USTRUCT(BlueprintType)
struct FAudioVCAData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    SCORNAUDIOMODULE_API FAudioVCAData();
};

