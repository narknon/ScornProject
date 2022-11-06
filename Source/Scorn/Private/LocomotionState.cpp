#include "LocomotionState.h"

FTransform ULocomotionState::GetTransform() const {
    return FTransform{};
}

EAnimPose ULocomotionState::GetAnimPose() const {
    return EAnimPose::Idle;
}

ULocomotionState::ULocomotionState() {
    this->AnimPose = EAnimPose::Idle;
}

