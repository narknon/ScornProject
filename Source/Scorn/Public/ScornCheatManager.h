#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/CheatManager.h"
#include "ScornCheatManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable, Config=Game)
class SCORN_API UScornCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDebugStaticCellsDelegate, bool, bDebugStaticOn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDebugDynamicCellsDelegate, bool, bDebugDynamicOn);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugSoapp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDynamicLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugActorSwitching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugLevelStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDynamicCells;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugDynamicCellsDelegate DebugDynamicCellsDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugStaticCells;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugStaticCellsDelegate DebugStaticCellsDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TeleportListWidgetClass;
    
public:
    UScornCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateCullingVolumes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGlobalEventsDebugMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToScornPresent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportPlayer(const FString& TeleportLocationName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void SkipPuzzle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMistPlanes(const bool& Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void SetPlayerLightIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void SetPersistentUiEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCanSelectGamePreset(bool CanSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void ScornVFX_Debug_DynamicLights();
    
    UFUNCTION(Exec)
    void ScornGameplayTriggerWorldEvent(uint8 WorldEvent);
    
    UFUNCTION(Exec)
    void ScornGameplayStopWorldEvent(uint8 WorldEvent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornGameplaySpawnActor(const FString& ActorClass, float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornGameplayReloadMCJsonSettings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornGameplayPrintMCDebugReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornGameplayHurtMC(const float& Damage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornGameplayGodMode(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornGameplayAIDebugReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void QaSnapshot();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool QaResetAchievements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void QaDebugSwitching();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void QaDebugStreaming();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintTeleportLocations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogWorldEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogTeleportLocations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogGlobalEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetVCAState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetSwitchingCurrentState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetStreamingCurrentState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetMusicManagerState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetMCDebugReport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetFogAndSkylightCurrentState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetBusState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetAudioZoneState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetAudioEventState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetAudioBanksState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    TArray<FString> GetAIDebugReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceGarbageCollection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteCommandTemplate(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSwitchedOnNPCs(const bool& Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void DebugSoundObstructionAndPropagation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugNametable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelStreaming(const bool& Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLevelSectionSwitching(const bool& Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugActorSwitching(const bool& Debug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug3dNavStaticCells();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug3dNavDynamicCells();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AudioSnapshot();
    
};

