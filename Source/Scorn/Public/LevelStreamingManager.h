#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "AssetInfo.h"
#include "UObject/NoExportTypes.h"
#include "ELevelStreamingManagerState.h"
#include "EStreamingActionType.h"
#include "LevelStreamingManager.generated.h"

class ALevelStreamingManager;
class ULevelStreamingDataAsset;

UCLASS(Blueprintable)
class SCORN_API ALevelStreamingManager : public ASavableActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStreamingManagerStateChange, ALevelStreamingManager*, Manager, const ELevelStreamingManagerState&, PreviousState, const ELevelStreamingManagerState&, NextState);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDataAsset* LevelsToStreamDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetInfo> ScannedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelStreamingManagerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DebugColor;
    
public:
    ALevelStreamingManager();
    UFUNCTION(BlueprintCallable)
    void UnpauseStreaming();
    
    UFUNCTION(BlueprintCallable)
    void StreamLevels(const EStreamingActionType& StreamingAction, bool Force);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ShouldPrintDebugInfoOnScreen();
    
    UFUNCTION(BlueprintCallable)
    void ScanLevelDependencies();
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseStreaming();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden();
    
    UFUNCTION(BlueprintCallable)
    void LogScannedAssets();
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetCurrentStreamingStatus();
    
};

