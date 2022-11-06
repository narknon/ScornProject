#pragma once
#include "CoreMinimal.h"
#include "EScornPlatform.h"
#include "ScornUserSettings.h"
#include "SettingsInfoData.generated.h"

USTRUCT(BlueprintType)
struct FSettingsInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornUserSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScornPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasResolutionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Created;
    
    SCORN_API FSettingsInfoData();
};

