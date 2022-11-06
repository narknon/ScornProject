#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AudioVCAData.h"
#include "AudioZoneTriggerData.h"
#include "EScornAudioMonitorMode.h"
#include "AudioEventInstanceData.h"
#include "AudioBusData.h"
#include "EBankStatus.h"
#include "ESampleDataStatus.h"
#include "ScornAudioMonitorSubsystem.generated.h"

class UScornAudioModuleSettings;
class ABaseAudioZone;
class UBaseAudioMonitorWidget;

UCLASS(Blueprintable)
class SCORN_API UScornAudioMonitorSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABaseAudioZone*> AudioZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScornAudioModuleSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScornAudioMonitorMode CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseAudioMonitorWidget* CurrentWidget;
    
public:
    UScornAudioMonitorSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnloadAllBanks(TArray<FString> SkipBanks);
    
    UFUNCTION(BlueprintCallable)
    void SetVcaVolumeByName(const FString& inVcaName, float inVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetBusVolumeByName(const FString& inBusName, float inBusVolume);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    FAudioVCAData GetVCADataByName(const FString& inVcaName);
    
    UFUNCTION(BlueprintCallable)
    FAudioZoneTriggerData GetTriggerDataByName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetOverlappedTriggersNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadedBanksCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetLoadedBanksCleanNames();
    
    UFUNCTION(BlueprintCallable)
    FAudioEventInstanceData GetEventInstancesDataByName(const FString& inName);
    
    UFUNCTION(BlueprintCallable)
    FAudioBusData GetBusDataByPath(const FString& BusPath);
    
    UFUNCTION(BlueprintCallable)
    EBankStatus GetBankStatusByString(const FString& inName);
    
    UFUNCTION(BlueprintCallable)
    ESampleDataStatus GetBankSampleStatusByString(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllVCANames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAudioVCAData> GetAllVCAData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAudioZoneTriggerData> GetAllOverlappedTriggersData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllMusicManagerMainEventNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAudioEventInstanceData> GetAllMusicManagerMainEventData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllEventInstancesDataPlayingNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAudioEventInstanceData> GetAllEventInstancesDataPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllEventInstancesDataMemoryNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAudioEventInstanceData> GetAllEventInstancesDataMemory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllBusesNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAudioBusData> GetAllBusesData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllBanksCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllBanksCleanNames();
    
    UFUNCTION(BlueprintCallable)
    void DisplayZoneTriggers(bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void DisplayMusicManagerTriggers(bool Debug);
    
    UFUNCTION(BlueprintCallable)
    void DebugAllNPC(bool Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activate(EScornAudioMonitorMode Mode);
    
};

