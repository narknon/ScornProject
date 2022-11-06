#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"

#include "Engine/GameInstance.h"
#include "Engine/EngineTypes.h"
#include "EScornGameStats.h"
#include "EMCType.h"
#include "EGameInstanceState.h"
#include "EScornNewGamePreset.h"
#include "ELoadingScreenState.h"
#include "EScornSubLevel.h"
#include "FMODBlueprintStatics.h"
#include "AbstractScornGameInstance.generated.h"

class AWorldSectionManager;
class UWorldEventManager;
class UScornViewportClient;
class UWorld;
class UScornConsoleCommands;

UCLASS(Abstract, Blueprintable, NonTransient)
class SCORN_API UAbstractScornGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnXboxControllerConfirmed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMCTypeChange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamsDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCTypeChange OnMCTypeChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnTeleportEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnUserLoggedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXboxControllerConfirmed OnXboxControllerConfirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSelectGamePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath GamePersistentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentPersistentLevelAbsolutePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath MainMenuPersistentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventInstance TravelingAudioEventInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelFadeDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnPostMapLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGamepadEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWorldSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldSectionManager> WorldSectionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldEventManager* WorldEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldEventManager> ConcreteWorldEventManager;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<EScornGameStats>, int32> CurrentGameStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMCType MCType;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnFinishLoading;
    
    UAbstractScornGameInstance();
    UFUNCTION(BlueprintCallable)
    void WriteAchievement(FName AchievevementName);
    
    UFUNCTION(BlueprintCallable)
    void StopTravelMoviePlayer();
    
    UFUNCTION(BlueprintCallable)
    void ShowLoadingAndPauseGame();
    
    UFUNCTION(BlueprintCallable)
    void SetUseWorldSections(bool UseWorldSections);
    
    UFUNCTION(BlueprintCallable)
    void SetState(const TEnumAsByte<EGameInstanceState> State);
    
    UFUNCTION(BlueprintCallable)
    void SetNewGamePreset(const TEnumAsByte<EScornNewGamePreset> NewGamePreset);
    
    UFUNCTION(BlueprintCallable)
    void SetMCType(const EMCType NewMCType);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenState(const TEnumAsByte<ELoadingScreenState>& State);
    
    UFUNCTION(BlueprintCallable)
    void SetGameStatsDictionaryValue(TEnumAsByte<EScornGameStats> Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugLoadingScreen(const bool& Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSubLevel(const TEnumAsByte<EScornSubLevel> SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentGameStats(const TMap<TEnumAsByte<EScornGameStats>, int32> GameStats);
    
    UFUNCTION(BlueprintCallable)
    void ResumeGameAndSetGameState();
    
    UFUNCTION(BlueprintCallable)
    void ResetWorldEventManager();
    
    UFUNCTION(BlueprintCallable)
    void ResetGameStats();
    
    UFUNCTION(BlueprintCallable)
    void QueryAchievements();
    
    UFUNCTION(BlueprintCallable)
    void QueryAchievementDescriptions();
    
    UFUNCTION(BlueprintCallable)
    void PlayTravelMovie(const FString& inName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserIsSelected(bool bIsSellectedUserLoggedIn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnScornViewportInitialized(UScornViewportClient* InScornViewportClient);
    
    UFUNCTION(BlueprintCallable)
    void OnPreLoadMap(const FString& inMapName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void OnPostLoadMap(UWorld* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuSubSystemInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnExternalUIChange(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginPlayLevelStreamingDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEOSSubSystem();
    
    UFUNCTION(BlueprintCallable)
    void IncrementGameStatsDictionaryValue(TEnumAsByte<EScornGameStats> Key);
    
    UFUNCTION(BlueprintCallable)
    void HideLoadingAndResumeGame();
    
    UFUNCTION(BlueprintCallable)
    void HandleTextureStreamingEnd(bool AreTexturesLoaded);
    
    UFUNCTION(BlueprintCallable)
    void HandleScreenFadedToBlackEnd(UScornViewportClient* InScornViewportClient, bool IsFading);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnTravelCrossOverEnd();
    
    UFUNCTION(BlueprintCallable)
    UWorldEventManager* GetWorldEventManager();
    
    UFUNCTION(BlueprintCallable)
    float GetTravelFadeTime();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EGameInstanceState> GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UScornViewportClient* GetScornViewportClient();
    
    UFUNCTION(BlueprintCallable)
    UScornConsoleCommands* GetScornConsoleCommands();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMCType GetMCType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMainMenuPersistentLevelName();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsDemoBuild();
    
    UFUNCTION(BlueprintCallable)
    bool GetGameStatsDictionaryValue(TEnumAsByte<EScornGameStats> Key, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGamePersistentLevelName();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentUserNickname();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EScornSubLevel> GetCurrentSubLevel();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EScornNewGamePreset> GetCurrentNewGamePreset();
    
    UFUNCTION(BlueprintPure)
    TMap<TEnumAsByte<EScornGameStats>, int32> GetCurrentGameStats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UWorldEventManager> GetConcreteWorldEventManagerClass() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCachedAchievementProgres(const FString& AchievementId);
    
    UFUNCTION(BlueprintCallable)
    void CheckIfUserIsLoggedIn();
    
};

