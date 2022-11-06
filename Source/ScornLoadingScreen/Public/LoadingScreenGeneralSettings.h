#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenGeneralSettings.generated.h"

USTRUCT(BlueprintType)
struct FLoadingScreenGeneralSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestingLevelTravelInEditor;
    
    SCORNLOADINGSCREEN_API FLoadingScreenGeneralSettings();
};

