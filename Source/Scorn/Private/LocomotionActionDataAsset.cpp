#include "LocomotionActionDataAsset.h"

class UBlendSpaceBase;

EAnimPose ULocomotionActionDataAsset::GetStartingAnimPose() const {
    return EAnimPose::Idle;
}

EAnimPose ULocomotionActionDataAsset::GetResultingAnimPose() const {
    return EAnimPose::Idle;
}

FVector2D ULocomotionActionDataAsset::GetMaxPositionOffsets() const {
    return FVector2D{};
}

UBlendSpaceBase* ULocomotionActionDataAsset::GetBlendSpace(float BlendParameter) const {
    return NULL;
}

void ULocomotionActionDataAsset::CheckActionForErrors() {
}

ULocomotionActionDataAsset::ULocomotionActionDataAsset() {
    this->StartingAnimPose = EAnimPose::Idle;
    this->ResultingAnimPose = EAnimPose::Idle;
    this->BlendSpaceDataAsset = NULL;
}

