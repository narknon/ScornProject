#pragma once
#include "CoreMinimal.h"
#include "AudioZoneSoundSourceData.h"
#include "AudioZoneTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FAudioZoneTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentZoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioZoneSoundSourceData> SoundSourcesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioZoneSoundSourceData> ReverbSourcesData;
    
    SCORNAUDIOMODULE_API FAudioZoneTriggerData();
};

