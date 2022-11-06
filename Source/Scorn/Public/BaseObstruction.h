#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ScornOcclusionDetails.h"
#include "ScornAudioOcclusionDebug.h"
#include "Engine/EngineTypes.h"
#include "BaseObstruction.generated.h"

class AScornCharacter;
class UCurveFloat;
class ASpatializedSoundDebugger;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UBaseObstruction : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornOcclusionDetails Details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornAudioOcclusionDebug DebuggerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpatializedSoundDebugger* ObstructionDebugger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScornCharacter* MainCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> OcclusionHitResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FMODAttenuationRange;
    
public:
    UBaseObstruction();
    UFUNCTION(BlueprintCallable)
    void UpdateObstructionModifier(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAttenuationRange(float InRange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisbilityChange(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLineTrace(const TArray<FHitResult>& InOcclusionHitResults);
    
private:
    UFUNCTION(BlueprintCallable)
    void ObstructionTimelineFinished();
    
    UFUNCTION(BlueprintCallable)
    void ObstructionTimelineCallback(float Val);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsListenerInRange();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSquaredDistanceToListener();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObstructionModifier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObsSum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AScornCharacter* GetMainCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFMODAttenuationRangeScaled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceInFMODunits();
    
    UFUNCTION(BlueprintCallable)
    void DebugObstruction(float DebugDuration);
    
};

