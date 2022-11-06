#pragma once
#include "CoreMinimal.h"
#include "ScornScalabilitySettings.h"
#include "UObject/Object.h"
#include "EScornAudioVCA.h"
#include "ScornAudioSettings.h"
#include "ScornUserSettings.h"
#include "InputCoreTypes.h"
#include "EScornOverallQuality.h"
#include "UObject/NoExportTypes.h"
#include "ScornDisplaySettings.h"
#include "ScornGeneralSettings.h"
#include "ScornControlsSettings.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "ScornUserGameSettings.generated.h"

class UUserSettingsDebugDataAsset;
class UScornDefaultSettingsDataAsset;
class UScornUserGameSettings;

UCLASS(Blueprintable)
class SCORN_API UScornUserGameSettings : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResetAllSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInitialized);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScornDefaultSettingsDataAsset* ScornDefaultsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornUserSettings ScornSettings;
    
    UScornUserGameSettings();
    UFUNCTION(BlueprintCallable)
    void UpdatePersistentNonGamepadAxisMapping_EditorOnly(const FName MappingName, const float Scale, const FKey NewKey, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePersistentNonGamepadActionMapping_EditorOnly(const FName MappingName, const FKey NewKey, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void SetVCAVolume(EScornAudioVCA inVCA, float inVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetUiEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundOutputDevice(int32 NewSoundOutputDevice);
    
    UFUNCTION(BlueprintCallable)
    void SetShowGammaCorrectionScreen(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSmoothing(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertY(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertX(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFovSettings(float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetDebugStateDisabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLanguage(int32 inLanguage);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentGameVersion(const FString& inGameVersion);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLayout(int32 layout);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerAxisScale_EditorOnly(bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void SaveGeneralSettings();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SaveCurrentUserMappings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SaveBenchmarkScalabilityResults(bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void SaveAudioSettings();
    
    UFUNCTION(BlueprintCallable)
    bool ResetDisplayGeneralSettings();
    
    UFUNCTION(BlueprintCallable)
    bool ResetControlsSettings();
    
    UFUNCTION(BlueprintCallable)
    bool ResetAudioSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllDevicesMappingsAndSave_EditorOnly();
    
    UFUNCTION(BlueprintCallable)
    void OverwriteAllSettingsAndSaveToPersistent(const FScornUserSettings& InScornSettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void OnExitDebug(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScornScalabilitySettings LoadBenchmarkScalabilityResultsBackup(bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndSetPersistentScalabilitySettings(bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndSetAllPersistentSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAppRunned();
    
    UFUNCTION(BlueprintCallable)
    void InitilizeDefaults();
    
    UFUNCTION(BlueprintCallable)
    void Init(UScornDefaultSettingsDataAsset* UserSettingsDefaultsDataAsset, UUserSettingsDebugDataAsset* UserSettingsDebugDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowGammaCorrectionScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UScornUserGameSettings* GetScornUserGameSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScornOverallQuality GetScornOverallQualityByTempScalabilityValues();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScornOverallQuality GetScornOverallQualityByScalabilityValues(FScornScalabilitySettings Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScornScalabilitySettings GetScalabilityValuesByPreset(EScornOverallQuality ScornOverallQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIntPoint> GetPossibleResolutions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScornGeneralSettings GetPersistentGeneralSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPersistentGammaSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScornControlsSettings GetPersistentControlsSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScornAudioSettings GetPersistentAudioSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScornDisplaySettings GetPersistentAllDisplaySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetPersistantAxisMappings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetPersistantActionMappings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNativeResolution(int32& X, int32& Y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUIEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEMASmoothingPeriodStandardized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScornGeneralSettings GetDefaultGeneral() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScornDisplaySettings GetDefaultDisplay() const;
    
    UFUNCTION(BlueprintCallable)
    FScornControlsSettings GetDefaultControls();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScornAudioSettings GetDefaultAudio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentVibrationsSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSmoothingPeriod();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentInvertedMouseY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentInvertedMouseX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentGameVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFov();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentControlerLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FScornUserSettings GetAllPersistentUserSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllPersistentNonGamepadAxisKeyNamesMappingByAxisMapping_EditorOnly(const FInputAxisKeyMapping& AxisKeyMapping, TArray<FString>& OutAxisKeysNames);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllNonGamepadPersistentActionKeyNamesMappingByActionMapping_EditorOnly(const FInputActionKeyMapping& ActionMapping, TArray<FString>& OutActionKeysNames);
    
    UFUNCTION(BlueprintCallable)
    FScornUserSettings GetAllDefaultSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FInputActionKeyMapping> GetAllDefaultActionMappings();
    
    UFUNCTION(BlueprintCallable)
    FInputAxisKeyMapping FormatAxisMappingStringToAxisMapping(const FString& InAxisName, bool& IsGamepadMapping);
    
    UFUNCTION(BlueprintCallable)
    FInputActionKeyMapping FormatActionMappingStringToActionMapping(const FString& ActionName, bool& IsGamepadMapping);
    
public:
    UFUNCTION(BlueprintCallable)
    FString CreateSaveAxisStringFromAxisMapping(const FInputAxisKeyMapping& AxisKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    FString CreateSaveActionStringFromActionMapping(const FInputActionKeyMapping& ActionKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDefaultMappings_EditorOnly();
    
};

