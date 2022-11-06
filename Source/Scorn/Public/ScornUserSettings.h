#pragma once
#include "CoreMinimal.h"
#include "ScornDisplaySettings.h"
#include "ScornGeneralSettings.h"
#include "ScornScalabilitySettings.h"
#include "ScornControlsSettings.h"
#include "ScornAudioSettings.h"
#include "ScornUserSettings.generated.h"

USTRUCT(BlueprintType)
struct FScornUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornGeneralSettings General;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornDisplaySettings Display;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornScalabilitySettings Scalability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornControlsSettings Controls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornAudioSettings Audio;
    
    SCORN_API FScornUserSettings();
};

