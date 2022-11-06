#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SaveGameController.generated.h"

UCLASS(Blueprintable)
class SCORN_API ASaveGameController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterDead;
    
public:
    ASaveGameController();
    UFUNCTION(BlueprintCallable)
    void SaveSoft();
    
    UFUNCTION(BlueprintCallable)
    void SaveHard(const bool& IsAct, const FText& SaveName, const FString& SaveNameSuffix);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveCheckpoint(const bool& IsAct, const FText& CheckpointName, const FString& SaveNameSuffix);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadLatSave();
    
    UFUNCTION(BlueprintCallable)
    void LoadHardSave(int32 SaveIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsSoftSavingAllowed();
    
    UFUNCTION(BlueprintCallable)
    bool IsHardSavingAllowed();
    
    UFUNCTION(BlueprintCallable)
    bool IsAlreadySaved(int32 SaveIndex);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateSoftSave();
    
    UFUNCTION(BlueprintCallable)
    bool GetMostRecentHardSaveIndex(int32& OutSaveIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearSaveData();
    
};

