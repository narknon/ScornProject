#pragma once
#include "CoreMinimal.h"
#include "AudioZoneSoundSourceData.generated.h"

USTRUCT(BlueprintType)
struct FAudioZoneSoundSourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    SCORNAUDIOMODULE_API FAudioZoneSoundSourceData();
};

