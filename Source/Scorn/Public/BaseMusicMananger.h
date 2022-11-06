#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMusicManagerCombatState.h"
#include "BaseMusicMananger.generated.h"

class UMusicManagerDataAsset;
class USavableFMODAudioComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseMusicMananger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicManagerDataAsset* CurrentSegmentDataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USavableFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimelinePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentState;
    
public:
    ABaseMusicMananger();
    UFUNCTION(BlueprintCallable)
    void SetSegment(UMusicManagerDataAsset* SegmentDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPaused(bool NewPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetDebug(const bool& inDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatState(TEnumAsByte<EMusicManagerCombatState> InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSoftStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetState(float InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivateCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStateParameterName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSegment(UMusicManagerDataAsset*& currentSegment, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EMusicManagerCombatState> GetCombatState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCombatParameterName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCombatExitMarkerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USavableFMODAudioComponent* GetAudioComponent() const;
    
};

