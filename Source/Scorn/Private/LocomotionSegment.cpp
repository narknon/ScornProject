#include "LocomotionSegment.h"

class ULocomotionAction;
class ULocomotionSegment;

bool ULocomotionSegment::RemoveRemainingActions() {
    return false;
}

bool ULocomotionSegment::IsEmpty() const {
    return false;
}

FTransform ULocomotionSegment::GetTransformAtTime(float Time) const {
    return FTransform{};
}

float ULocomotionSegment::GetSegmentTime() const {
    return 0.0f;
}

FTransform ULocomotionSegment::GetResultingTransform(bool& bSuccess) const {
    return FTransform{};
}

EAnimPose ULocomotionSegment::GetResultingAnimPose() const {
    return EAnimPose::Idle;
}

ULocomotionAction* ULocomotionSegment::GetNextAction() {
    return NULL;
}

ULocomotionAction* ULocomotionSegment::GetLastAction() const {
    return NULL;
}

ULocomotionAction* ULocomotionSegment::GetFirstAction() const {
    return NULL;
}

TArray<ULocomotionAction*> ULocomotionSegment::GetActions() const {
    return TArray<ULocomotionAction*>();
}

void ULocomotionSegment::DrawDebugSegment(float Radius, int32 Segments, float ArrowLength, float Duration, FLinearColor Color) {
}

ULocomotionSegment* ULocomotionSegment::Copy() {
    return NULL;
}

bool ULocomotionSegment::ApplyDeltaCorrection(const FTransform StartTransform, const FTransform EndTransform, const FTransform GoalTransform) {
    return false;
}

void ULocomotionSegment::AddActionToFront(ULocomotionAction* Action) {
}

void ULocomotionSegment::AddAction(ULocomotionAction* Action) {
}

ULocomotionSegment::ULocomotionSegment() {
}

