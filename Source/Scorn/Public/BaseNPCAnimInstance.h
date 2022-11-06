#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "MorphTargetData.h"
#include "EAnimPose.h"
#include "EBlendSpaceQuadrant.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "AnimPathPoint.h"
#include "BaseNPCAnimInstance.generated.h"

class ABaseNPC;
class UAnimationControllerComponent;
class UBlendSpaceBase;
class UWorldStateComponent;
class UAnimMontage;
class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class SCORN_API UBaseNPCAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamsDelegate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationControllerComponent* AnimationController;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnGloryKillEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnGloryKillVFXStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate AnimFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate AnimStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate WalkCycleFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate WalkCycleStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate WalkStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate WalkFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate ScriptedAnimEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditiveAnimVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPose LastAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAnimStateNameCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHealthPositive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHealthNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHealthNearlyZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAnimTimeRemainingCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlendSpaceQuadrant CurrentBlendSpaceQuadrantCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGloryKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GloryKillAnimVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIKEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IKAlpha;
    
    UPROPERTY(EditAnywhere)
    uint8 LastPlayedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlendSpaceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* LocomotionBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionBlendSpaceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionAnimPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviewInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WalkStates;
    
public:
    UBaseNPCAnimInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateMorphTargets(TArray<FMorphTargetData> InMorphTargets);
    
    UFUNCTION(BlueprintCallable)
    void SetStopAnimation(bool bStop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLookAtEnabled(bool LookAtEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotionBlendSpace(UBlendSpaceBase* BlendSpace, float Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotionAnimPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetIKAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetGloryKill(bool GloryKill, int32 AnimVariation);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableIK(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpaceParams(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimation(uint8 Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LookAtVectorFactor(FVector LookAtLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurveActive(EAnimCurveType CurveType, FName CurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(UWorldStateComponent* WorldState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRootMotionDeltaTransform(const UBlendSpaceBase* BlendSpace, float BlendParameter, TArray<FAnimPathPoint>& AnimPath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAnimTimeRemainingRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAnimTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAnimTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAnimStateName();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetCurrentAnimRemainingTransform(float BlendParameter, float CurrentTime, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlendSpaceQuadrant GetBlendSpaceQuadrant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseNPC* GetBaseNpcOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* FindCorrectMontage(uint8 AnimEnum);
    
    UFUNCTION(BlueprintCallable)
    void CacheResultsToVariablesForMultithreading();
    
    UFUNCTION(BlueprintCallable)
    void Blend(float DeltaTime, bool Direction, UCurveFloat* Curve, float BlendDuration, float InBlendCurrentTime, float& BlendResult, float& OutBlendCurrentTime);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_GloryKillVFXStart();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_GloryKillEnd();
    
};

