#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorSwitchBaseRegion.h"
#include "ELevelSectionSwitcherUseMode.h"
#include "LevelSectionSwitcher.generated.h"

class AActor;
class ULevelStreamingDataAsset;
class USwitcherDataAsset;

UCLASS(Blueprintable)
class SCORN_API ALevelSectionSwitcher : public AActorSwitchBaseRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDataAsset*> LinkedStreamingData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugHideSelectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelSectionSwitcherUseMode UseMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> Include;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> Exclude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwitcherDataAsset* SwitcherData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldFilepath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewFilepath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateAssetPointers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintAllAssetPointers;
    
public:
    ALevelSectionSwitcher();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleActorsVisibility(bool Hide);
    
    UFUNCTION(BlueprintCallable)
    void SelectionAction(bool AddActors);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInvalidReferences();
    
    UFUNCTION(BlueprintCallable)
    void MapScanAction(bool AddActors);
    
};

