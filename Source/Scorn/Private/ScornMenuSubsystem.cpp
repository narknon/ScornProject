#include "ScornMenuSubsystem.h"

class UBaseWidget;
class UUserWidget;

TArray<int32> UScornMenuSubsystem::SortHardSavesByDate(const TArray<FSaveGamePackage>& HardSaves) {
    return TArray<int32>();
}

void UScornMenuSubsystem::SimulateKeyPress(FKey Key, bool InIsLeftShiftDown, bool InIsLeftControlDown, bool InIsRightControlDown, bool InIsLeftAltDown, bool InIsRightAltDown, bool InIsLeftCommandDown, bool InIsRightCommandDown, bool InAreCapsLocked) {
}

void UScornMenuSubsystem::SimulateEnterAction() {
}

void UScornMenuSubsystem::SetUserPrefs(const FUserProfilesInfoData& UserPrefs) {
}

void UScornMenuSubsystem::SetResolutionChanged() {
}

void UScornMenuSubsystem::SetProfileInfo(FUserProfileData profileInfo) {
}

void UScornMenuSubsystem::SetPauseMenuWidget(UBaseWidget* InPauseMenuWidget) {
}

void UScornMenuSubsystem::SetCurrentSlot(const int32& SlotIndex) {
}

bool UScornMenuSubsystem::SetAndSavePendingAchievements(const TArray<FString>& newPendingAchievements) {
    return false;
}

void UScornMenuSubsystem::SetActCheckpointIndexes(TArray<int32> indexes) {
}

void UScornMenuSubsystem::SaveUserPrefs(bool& Success) {
}

bool UScornMenuSubsystem::SaveSettings() {
    return false;
}

bool UScornMenuSubsystem::SaveHard(const bool& IsAct, const FText& SaveName, const FString& SaveNameSuffix, const int32& HardSaveIndex) {
    return false;
}

void UScornMenuSubsystem::ResetSaveGameManager() {
}

void UScornMenuSubsystem::QuitGame(UUserWidget* Widget) {
}

FScornUserSettings UScornMenuSubsystem::OverwriteResolution(FScornUserSettings inSettings, int32 resX, int32 resY) {
    return FScornUserSettings{};
}

void UScornMenuSubsystem::OverwriteExistingSaveSlot(const FText& ProfileName, const int32& SlotIndex) {
}

void UScornMenuSubsystem::OverrideSoftSave(const FSaveGamePackage& HardSave) {
}

void UScornMenuSubsystem::NavigateToPrevious() {
}

void UScornMenuSubsystem::NavigateToNext() {
}

bool UScornMenuSubsystem::LoadUserPrefs() {
    return false;
}

void UScornMenuSubsystem::LoadSoftSave(const int32& SaveSlotIndex, bool& Success) {
}

bool UScornMenuSubsystem::LoadSettings(FSettingsInfoData& Data) {
    return false;
}

bool UScornMenuSubsystem::LoadSaveFile(const FString& Filename, FSaveGamePackage& OutSoftSave) {
    return false;
}

bool UScornMenuSubsystem::LoadPendingAchievements(TArray<FString>& pendingAchievements) {
    return false;
}

void UScornMenuSubsystem::LoadHardSave(const int32& SaveSlotIndex, const int32& HardSaveIndex, bool& Success) {
}

bool UScornMenuSubsystem::IsSaveSystemEnabled() {
    return false;
}

void UScornMenuSubsystem::IsCurrentProfileIndexValid(bool& IsValid) {
}

FUserProfilesInfoData UScornMenuSubsystem::GetUserPrefs() {
    return FUserProfilesInfoData{};
}

EScornPlatform UScornMenuSubsystem::GetScornPlatform() {
    return EScornPlatform::Windows;
}

FUserProfileData UScornMenuSubsystem::GetProfileInfo() {
    return FUserProfileData{};
}

UBaseWidget* UScornMenuSubsystem::GetPauseMenuWidget() const {
    return NULL;
}

FKey UScornMenuSubsystem::GetMenuActionGamepadKeyReference() {
    return FKey{};
}

int32 UScornMenuSubsystem::GetMaxNumberOfSaveGameProfiles() {
    return 0;
}

bool UScornMenuSubsystem::GetIsGamepadAttached() {
    return false;
}

int32 UScornMenuSubsystem::GetCurrentSlotIndex() {
    return 0;
}

TArray<FUserProfileData> UScornMenuSubsystem::GetAllSlotInfo() {
    return TArray<FUserProfileData>();
}

void UScornMenuSubsystem::GetAllDataForProfile(TArray<FString>& OutHardSaveNames, FSaveGamePackage& OutSoftSave, FUserProfileData& OutSaveSlotInfoData, bool& Success, const int32& SaveSlotIndex) {
}

void UScornMenuSubsystem::GetAllCurrentProfileData(TArray<FString>& OutHardSaveNames, FSaveGamePackage& OutSoftSave, FUserProfileData& OutSaveSlotInfoData, bool& Success) {
}

bool UScornMenuSubsystem::FindSaveSlotBySlotIndex(const TArray<FUserProfileData>& Slots, const int32& Index, FUserProfileData& OutSlotInfo) {
    return false;
}

void UScornMenuSubsystem::DisplayPauseMenu() {
}

void UScornMenuSubsystem::DestroyPauseMenuWidget() {
}

bool UScornMenuSubsystem::DeleteHardSave(const int32& ProfileIndex, const int32& HardSaveIndex) {
    return false;
}

bool UScornMenuSubsystem::DeleteExistingProfile(const int32& SlotIndex) {
    return false;
}

int32 UScornMenuSubsystem::CreateNewSaveSlot(const FText& ProfileName, const int32& SlotIndex) {
    return 0;
}

FString UScornMenuSubsystem::AddTrailingZeroIfNeeded(const int32& Number) {
    return TEXT("");
}

UScornMenuSubsystem::UScornMenuSubsystem() {
    this->MenuPreferencesDataAsset = NULL;
    this->ActiveMainWindowWidget = NULL;
    this->MainMenuSettingsMasterWidget = NULL;
    this->PauseMenuWidget = NULL;
}

