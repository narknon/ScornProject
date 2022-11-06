#pragma once
#include "CoreMinimal.h"
#include "ScornGeneralSettings.generated.h"

USTRUCT(BlueprintType)
struct FScornGeneralSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGammaCorrection;
    
    SCORN_API FScornGeneralSettings();
};

