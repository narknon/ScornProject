#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ScornAudioModuleDebugger.generated.h"

class UBaseAudioMonitorWidget;
class UAudioMonitorDataAsset;

USTRUCT(BlueprintType)
struct SCORNAUDIOMODULE_API FScornAudioModuleDebugger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFMODDebugging;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEventTraceLogging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseAudioMonitorWidget> BankDebuggerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseAudioMonitorWidget> EventInstancePlayingDebuggerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseAudioMonitorWidget> VCAStatusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseAudioMonitorWidget> BusStatusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseAudioMonitorWidget> ZoneStatusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseAudioMonitorWidget> MusicManagerStatusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseAudioMonitorWidget> AllNPCStatusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseAudioMonitorWidget> AudioMenuSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioMonitorDataAsset* AudioMonitorDebuggerDataAsset;
    
    FScornAudioModuleDebugger();
};

