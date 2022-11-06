#include "LocomotionPlan.h"

class ULocomotionAction;
class ULocomotionSegment;
class ULocomotionPlan;

void ULocomotionPlan::UpdatePlanTime(float DeltaSeconds) {
}

void ULocomotionPlan::StopPlan(bool& IsEmpty) {
}

void ULocomotionPlan::RemoveRemainingSegments() {
}

FTransform ULocomotionPlan::PredictTransform(float DeltaSeconds) const {
    return FTransform{};
}

bool ULocomotionPlan::IsEmptyPlan() const {
    return false;
}

FTransform ULocomotionPlan::GetTransformAtTime(float Time) const {
    return FTransform{};
}

TArray<ULocomotionSegment*> ULocomotionPlan::GetSegments() const {
    return TArray<ULocomotionSegment*>();
}

FTransform ULocomotionPlan::GetResultingTransform(bool& bSuccess) const {
    return FTransform{};
}

EAnimPose ULocomotionPlan::GetResultingAnimPose(bool& bSuccess) const {
    return EAnimPose::Idle;
}

float ULocomotionPlan::GetPlanTime() const {
    return 0.0f;
}

ULocomotionSegment* ULocomotionPlan::GetNextSegment() {
    return NULL;
}

ULocomotionSegment* ULocomotionPlan::GetLastSegment() const {
    return NULL;
}

ULocomotionAction* ULocomotionPlan::GetFirstAction() const {
    return NULL;
}

ULocomotionSegment* ULocomotionPlan::GetCurrentSegment() const {
    return NULL;
}

void ULocomotionPlan::DrawDebugPlan(float Radius, int32 SphereSegments, float ArrowLength, float Duration, FLinearColor Color) {
}

ULocomotionPlan* ULocomotionPlan::Copy() {
    return NULL;
}

void ULocomotionPlan::AppendPlan(ULocomotionPlan* PlanToAppend) {
}

void ULocomotionPlan::AddSegment(ULocomotionSegment* Segment) {
}

ULocomotionPlan::ULocomotionPlan() {
    this->CurrentPlanTime = 0.00f;
}

