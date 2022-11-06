#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SaveGamePackage.h"
#include "InputCoreTypes.h"
#include "UserProfilesInfoData.h"
#include "UserProfileData.h"
#include "ScornUserSettings.h"
#include "SettingsInfoData.h"
#include "EScornPlatform.h"
#include "ScornMenuSubsystem.generated.h"

class UMenuPreferencesDataAsset;
class UUserWidget;
class UBaseWidget;

UCLASS(Blueprintable)
class SCORN_API UScornMenuSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForceBack, UUserWidget*, SubWindowRef);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeResetActionStatus, UUserWidget*, Widget, bool, IsResetEnabled);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeResetActionStatus OnChangeResetActionStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForceBack OnForceBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuPreferencesDataAsset* MenuPreferencesDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveMainWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MainMenuSettingsMasterWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseWidget* PauseMenuWidget;
    
public:
    UScornMenuSubsystem();
    UFUNCTION(BlueprintCallable)
    TArray<int32> SortHardSavesByDate(const TArray<FSaveGamePackage>& HardSaves);
    
    UFUNCTION(BlueprintCallable)
    static void SimulateKeyPress(FKey Key, bool InIsLeftShiftDown, bool InIsLeftControlDown, bool InIsRightControlDown, bool InIsLeftAltDown, bool InIsRightAltDown, bool InIsLeftCommandDown, bool InIsRightCommandDown, bool InAreCapsLocked);
    
    UFUNCTION(BlueprintCallable)
    static void SimulateEnterAction();
    
    UFUNCTION(BlueprintCallable)
    void SetUserPrefs(const FUserProfilesInfoData& UserPrefs);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionChanged();
    
    UFUNCTION(BlueprintCallable)
    void SetProfileInfo(FUserProfileData profileInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseMenuWidget(UBaseWidget* InPauseMenuWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSlot(const int32& SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetAndSavePendingAchievements(const TArray<FString>& newPendingAchievements);
    
    UFUNCTION(BlueprintCallable)
    void SetActCheckpointIndexes(TArray<int32> indexes);
    
    UFUNCTION(BlueprintCallable)
    void SaveUserPrefs(bool& Success);
    
    UFUNCTION(BlueprintCallable)
    bool SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    bool SaveHard(const bool& IsAct, const FText& SaveName, const FString& SaveNameSuffix, const int32& HardSaveIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveGameManager();
    
    UFUNCTION(BlueprintCallable)
    void QuitGame(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    FScornUserSettings OverwriteResolution(FScornUserSettings inSettings, int32 resX, int32 resY);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteExistingSaveSlot(const FText& ProfileName, const int32& SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverrideSoftSave(const FSaveGamePackage& HardSave);
    
    UFUNCTION(BlueprintCallable)
    static void NavigateToPrevious();
    
    UFUNCTION(BlueprintCallable)
    static void NavigateToNext();
    
    UFUNCTION(BlueprintCallable)
    bool LoadUserPrefs();
    
    UFUNCTION(BlueprintCallable)
    void LoadSoftSave(const int32& SaveSlotIndex, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    bool LoadSettings(FSettingsInfoData& Data);
    
    UFUNCTION(BlueprintCallable)
    bool LoadSaveFile(const FString& Filename, FSaveGamePackage& OutSoftSave);
    
    UFUNCTION(BlueprintCallable)
    bool LoadPendingAchievements(TArray<FString>& pendingAchievements);
    
    UFUNCTION(BlueprintCallable)
    void LoadHardSave(const int32& SaveSlotIndex, const int32& HardSaveIndex, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveSystemEnabled();
    
    UFUNCTION(BlueprintCallable)
    void IsCurrentProfileIndexValid(bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    FUserProfilesInfoData GetUserPrefs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScornPlatform GetScornPlatform();
    
    UFUNCTION(BlueprintCallable)
    FUserProfileData GetProfileInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseWidget* GetPauseMenuWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetMenuActionGamepadKeyReference();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxNumberOfSaveGameProfiles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsGamepadAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSlotIndex();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUserProfileData> GetAllSlotInfo();
    
    UFUNCTION(BlueprintCallable)
    void GetAllDataForProfile(TArray<FString>& OutHardSaveNames, FSaveGamePackage& OutSoftSave, FUserProfileData& OutSaveSlotInfoData, bool& Success, const int32& SaveSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetAllCurrentProfileData(TArray<FString>& OutHardSaveNames, FSaveGamePackage& OutSoftSave, FUserProfileData& OutSaveSlotInfoData, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    bool FindSaveSlotBySlotIndex(const TArray<FUserProfileData>& Slots, const int32& Index, FUserProfileData& OutSlotInfo);
    
    UFUNCTION(BlueprintCallable)
    void DisplayPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPauseMenuWidget();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteHardSave(const int32& ProfileIndex, const int32& HardSaveIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteExistingProfile(const int32& SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateNewSaveSlot(const FText& ProfileName, const int32& SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    FString AddTrailingZeroIfNeeded(const int32& Number);
    
};

