#include "ScornUserGameSettings.h"

class UScornUserGameSettings;
class UScornDefaultSettingsDataAsset;
class UUserSettingsDebugDataAsset;
class UObject;

void UScornUserGameSettings::UpdatePersistentNonGamepadAxisMapping_EditorOnly(const FName MappingName, const float Scale, const FKey NewKey, bool& Success) {
}

void UScornUserGameSettings::UpdatePersistentNonGamepadActionMapping_EditorOnly(const FName MappingName, const FKey NewKey, bool& Success) {
}

void UScornUserGameSettings::SetVCAVolume(EScornAudioVCA inVCA, float inVolume) {
}

void UScornUserGameSettings::SetUiEnabled(bool Enabled) {
}

void UScornUserGameSettings::SetSoundOutputDevice(int32 NewSoundOutputDevice) {
}

void UScornUserGameSettings::SetShowGammaCorrectionScreen(bool bShow) {
}

void UScornUserGameSettings::SetMouseSmoothing(bool Value) {
}

void UScornUserGameSettings::SetMouseSensitivity(float Value) {
}

void UScornUserGameSettings::SetInvertY(bool Value) {
}

void UScornUserGameSettings::SetInvertX(bool Value) {
}

void UScornUserGameSettings::SetFovSettings(float Value) {
}

void UScornUserGameSettings::SetDebugStateDisabled(UObject* WorldContextObject) {
}

void UScornUserGameSettings::SetCurrentLanguage(int32 inLanguage) {
}

void UScornUserGameSettings::SetCurrentGameVersion(const FString& inGameVersion) {
}

void UScornUserGameSettings::SetControllerLayout(int32 layout) {
}

void UScornUserGameSettings::SetControllerAxisScale_EditorOnly(bool& Success) {
}

void UScornUserGameSettings::SaveSettings() {
}

void UScornUserGameSettings::SaveGeneralSettings() {
}

void UScornUserGameSettings::SaveCurrentUserMappings(UObject* WorldContextObject) {
}

void UScornUserGameSettings::SaveBenchmarkScalabilityResults(bool& Success) {
}

void UScornUserGameSettings::SaveAudioSettings() {
}

bool UScornUserGameSettings::ResetDisplayGeneralSettings() {
    return false;
}

bool UScornUserGameSettings::ResetControlsSettings() {
    return false;
}

bool UScornUserGameSettings::ResetAudioSettings() {
    return false;
}

void UScornUserGameSettings::ResetAllDevicesMappingsAndSave_EditorOnly() {
}

void UScornUserGameSettings::OverwriteAllSettingsAndSaveToPersistent(const FScornUserSettings& InScornSettings) {
}

void UScornUserGameSettings::OnExitDebug(UObject* WorldContextObject) {
}

FScornScalabilitySettings UScornUserGameSettings::LoadBenchmarkScalabilityResultsBackup(bool& Success) {
    return FScornScalabilitySettings{};
}

void UScornUserGameSettings::LoadAndSetPersistentScalabilitySettings(bool& Success) {
}

void UScornUserGameSettings::LoadAndSetAllPersistentSettings() {
}

bool UScornUserGameSettings::IsAppRunned() {
    return false;
}

void UScornUserGameSettings::InitilizeDefaults() {
}

void UScornUserGameSettings::Init(UScornDefaultSettingsDataAsset* UserSettingsDefaultsDataAsset, UUserSettingsDebugDataAsset* UserSettingsDebugDataAsset) {
}

bool UScornUserGameSettings::GetShowGammaCorrectionScreen() {
    return false;
}

UScornUserGameSettings* UScornUserGameSettings::GetScornUserGameSettings() {
    return NULL;
}

EScornOverallQuality UScornUserGameSettings::GetScornOverallQualityByTempScalabilityValues() {
    return EScornOverallQuality::Low;
}

EScornOverallQuality UScornUserGameSettings::GetScornOverallQualityByScalabilityValues(FScornScalabilitySettings Settings) {
    return EScornOverallQuality::Low;
}

FScornScalabilitySettings UScornUserGameSettings::GetScalabilityValuesByPreset(EScornOverallQuality ScornOverallQuality) {
    return FScornScalabilitySettings{};
}

TArray<FIntPoint> UScornUserGameSettings::GetPossibleResolutions() {
    return TArray<FIntPoint>();
}

FScornGeneralSettings UScornUserGameSettings::GetPersistentGeneralSettings() {
    return FScornGeneralSettings{};
}

float UScornUserGameSettings::GetPersistentGammaSettings() {
    return 0.0f;
}

FScornControlsSettings UScornUserGameSettings::GetPersistentControlsSettings() {
    return FScornControlsSettings{};
}

FScornAudioSettings UScornUserGameSettings::GetPersistentAudioSettings() {
    return FScornAudioSettings{};
}

FScornDisplaySettings UScornUserGameSettings::GetPersistentAllDisplaySettings() {
    return FScornDisplaySettings{};
}

TArray<FInputAxisKeyMapping> UScornUserGameSettings::GetPersistantAxisMappings() {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> UScornUserGameSettings::GetPersistantActionMappings() {
    return TArray<FInputActionKeyMapping>();
}

bool UScornUserGameSettings::GetNativeResolution(int32& X, int32& Y) {
    return false;
}

bool UScornUserGameSettings::GetIsUIEnabled() {
    return false;
}

float UScornUserGameSettings::GetEMASmoothingPeriodStandardized() {
    return 0.0f;
}

FScornGeneralSettings UScornUserGameSettings::GetDefaultGeneral() const {
    return FScornGeneralSettings{};
}

FScornDisplaySettings UScornUserGameSettings::GetDefaultDisplay() const {
    return FScornDisplaySettings{};
}

FScornControlsSettings UScornUserGameSettings::GetDefaultControls() {
    return FScornControlsSettings{};
}

FScornAudioSettings UScornUserGameSettings::GetDefaultAudio() const {
    return FScornAudioSettings{};
}

bool UScornUserGameSettings::GetCurrentVibrationsSettings() {
    return false;
}

float UScornUserGameSettings::GetCurrentSmoothingPeriod() {
    return 0.0f;
}

float UScornUserGameSettings::GetCurrentSensitivity() {
    return 0.0f;
}

int32 UScornUserGameSettings::GetCurrentLanguage() {
    return 0;
}

bool UScornUserGameSettings::GetCurrentInvertedMouseY() {
    return false;
}

bool UScornUserGameSettings::GetCurrentInvertedMouseX() {
    return false;
}

FString UScornUserGameSettings::GetCurrentGameVersion() {
    return TEXT("");
}

float UScornUserGameSettings::GetCurrentFov() {
    return 0.0f;
}

int32 UScornUserGameSettings::GetCurrentControlerLayout() {
    return 0;
}

FScornUserSettings UScornUserGameSettings::GetAllPersistentUserSettings(UObject* WorldContextObject) {
    return FScornUserSettings{};
}

bool UScornUserGameSettings::GetAllPersistentNonGamepadAxisKeyNamesMappingByAxisMapping_EditorOnly(const FInputAxisKeyMapping& AxisKeyMapping, TArray<FString>& OutAxisKeysNames) {
    return false;
}

bool UScornUserGameSettings::GetAllNonGamepadPersistentActionKeyNamesMappingByActionMapping_EditorOnly(const FInputActionKeyMapping& ActionMapping, TArray<FString>& OutActionKeysNames) {
    return false;
}

FScornUserSettings UScornUserGameSettings::GetAllDefaultSettings() {
    return FScornUserSettings{};
}

TArray<FInputActionKeyMapping> UScornUserGameSettings::GetAllDefaultActionMappings() {
    return TArray<FInputActionKeyMapping>();
}

FInputAxisKeyMapping UScornUserGameSettings::FormatAxisMappingStringToAxisMapping(const FString& InAxisName, bool& IsGamepadMapping) {
    return FInputAxisKeyMapping{};
}

FInputActionKeyMapping UScornUserGameSettings::FormatActionMappingStringToActionMapping(const FString& ActionName, bool& IsGamepadMapping) {
    return FInputActionKeyMapping{};
}

FString UScornUserGameSettings::CreateSaveAxisStringFromAxisMapping(const FInputAxisKeyMapping& AxisKeyMapping) {
    return TEXT("");
}

FString UScornUserGameSettings::CreateSaveActionStringFromActionMapping(const FInputActionKeyMapping& ActionKeyMapping) {
    return TEXT("");
}

void UScornUserGameSettings::ClearAllDefaultMappings_EditorOnly() {
}

UScornUserGameSettings::UScornUserGameSettings() {
}

