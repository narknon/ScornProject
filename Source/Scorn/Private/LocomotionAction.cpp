#include "LocomotionAction.h"

class ULocomotionAction;
class UBlendSpaceBase;

FTransform ULocomotionAction::GetTranslation() const {
    return FTransform{};
}

FTransform ULocomotionAction::GetTransformAtTime(float InTime) const {
    return FTransform{};
}

EAnimPose ULocomotionAction::GetStartingAnimPose() const {
    return EAnimPose::Idle;
}

FTransform ULocomotionAction::GetResultingTransform(bool& bSuccess) const {
    return FTransform{};
}

EAnimPose ULocomotionAction::GetResultingAnimPose() const {
    return EAnimPose::Idle;
}

float ULocomotionAction::GetBlendSpaceParameter() const {
    return 0.0f;
}

UBlendSpaceBase* ULocomotionAction::GetAnimationBlendSpace() const {
    return NULL;
}

float ULocomotionAction::GetActionTime() const {
    return 0.0f;
}

void ULocomotionAction::DrawDebugAction(float Radius, int32 Segments, float ArrowLength, float Duration, FLinearColor Color) {
}

ULocomotionAction* ULocomotionAction::Copy() {
    return NULL;
}

ULocomotionAction::ULocomotionAction() {
    this->BlendSpaceParameter = 0.00f;
    this->Time = 0.00f;
    this->StartingAnimPose = EAnimPose::Idle;
    this->ResultingAnimPose = EAnimPose::Idle;
    this->AnimationBlendSpace = NULL;
}

