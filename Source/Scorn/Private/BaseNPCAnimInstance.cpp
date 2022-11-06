#include "BaseNPCAnimInstance.h"

class UBlendSpaceBase;
class UWorldStateComponent;
class ABaseNPC;
class UCurveFloat;

void UBaseNPCAnimInstance::UpdateMorphTargets(TArray<FMorphTargetData> InMorphTargets) {
}

void UBaseNPCAnimInstance::SetStopAnimation(bool bStop) {
}


void UBaseNPCAnimInstance::SetLocomotionBlendSpace(UBlendSpaceBase* BlendSpace, float Parameter) {
}

void UBaseNPCAnimInstance::SetLocomotionAnimPlayRate(float PlayRate) {
}

void UBaseNPCAnimInstance::SetIKAlpha(float Alpha) {
}

void UBaseNPCAnimInstance::SetGloryKill(bool GloryKill, int32 AnimVariation) {
}

void UBaseNPCAnimInstance::SetEnableIK(bool bEnable) {
}

void UBaseNPCAnimInstance::SetBlendSpaceParams(float X, float Y, float Z) {
}



bool UBaseNPCAnimInstance::IsCurveActive(EAnimCurveType CurveType, FName CurveName) const {
    return false;
}

void UBaseNPCAnimInstance::Initialize_Implementation(UWorldStateComponent* WorldState) {
}

float UBaseNPCAnimInstance::GetSteeringAlpha() const {
    return 0.0f;
}

FTransform UBaseNPCAnimInstance::GetRootMotionDeltaTransform(const UBlendSpaceBase* BlendSpace, float BlendParameter, TArray<FAnimPathPoint>& AnimPath) const {
    return FTransform{};
}

float UBaseNPCAnimInstance::GetCurrentAnimTimeRemainingRatio() {
    return 0.0f;
}

float UBaseNPCAnimInstance::GetCurrentAnimTimeRemaining() {
    return 0.0f;
}

float UBaseNPCAnimInstance::GetCurrentAnimTime() {
    return 0.0f;
}

FName UBaseNPCAnimInstance::GetCurrentAnimStateName() {
    return NAME_None;
}

FTransform UBaseNPCAnimInstance::GetCurrentAnimRemainingTransform(float BlendParameter, float CurrentTime, float DeltaTime) {
    return FTransform{};
}

EBlendSpaceQuadrant UBaseNPCAnimInstance::GetBlendSpaceQuadrant() const {
    return EBlendSpaceQuadrant::Front;
}

ABaseNPC* UBaseNPCAnimInstance::GetBaseNpcOwner() {
    return NULL;
}


void UBaseNPCAnimInstance::CacheResultsToVariablesForMultithreading() {
}

void UBaseNPCAnimInstance::Blend(float DeltaTime, bool Direction, UCurveFloat* Curve, float BlendDuration, float InBlendCurrentTime, float& BlendResult, float& OutBlendCurrentTime) {
}

void UBaseNPCAnimInstance::AnimNotify_GloryKillVFXStart() {
}

void UBaseNPCAnimInstance::AnimNotify_GloryKillEnd() {
}

UBaseNPCAnimInstance::UBaseNPCAnimInstance() {
    this->AnimationController = NULL;
    this->AdditiveAnimVariation = 0;
    this->LastAnimPose = EAnimPose::Idle;
    this->HealthCache = 1.00f;
    this->bIsHealthPositive = true;
    this->bIsHealthNegative = false;
    this->bIsHealthNearlyZero = false;
    this->CurrentAnimTimeRemainingCache = 1.00f;
    this->CurrentBlendSpaceQuadrantCache = EBlendSpaceQuadrant::Front;
    this->bGloryKill = false;
    this->GloryKillAnimVariation = 0;
    this->MachineName = TEXT("Machine");
    this->bIKEnabled = false;
    this->IKAlpha = 0.00f;
    this->LastPlayedAnim = 0;
    this->TurnInPlaceAngle = 0.00f;
    this->bDisableLookAt = false;
    this->LocomotionBlendSpace = NULL;
    this->LocomotionBlendSpaceParameter = 0.00f;
    this->LocomotionAnimPlayRate = 1.00f;
    this->bPreviewInstance = false;
    this->bInitialized = false;
    this->bStopAnimation = false;
}

