#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ScornAudioModuleDebugger.h"
#include "ScornAudioModuleSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SCORNAUDIOMODULE_API UScornAudioModuleSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornAudioModuleDebugger ScornAudioModuleDebugger;
    
    UScornAudioModuleSettings();
};

