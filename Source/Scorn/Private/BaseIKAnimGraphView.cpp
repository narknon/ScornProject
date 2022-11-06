#include "BaseIKAnimGraphView.h"

void UBaseIKAnimGraphView::UpdateSpine_Implementation() {
}

void UBaseIKAnimGraphView::UpdateIK(const float dTime) {
}

FFootIKStruct UBaseIKAnimGraphView::UpdateFootIK(FFootIKStruct foot) {
    return FFootIKStruct{};
}

void UBaseIKAnimGraphView::UpdateFeet_Implementation() {
}

void UBaseIKAnimGraphView::UpdateAnimGraph_Implementation() {
}

void UBaseIKAnimGraphView::SetIKEnabled(const bool bEnableIK) {
}

void UBaseIKAnimGraphView::ResetSpine_Implementation() {
}

void UBaseIKAnimGraphView::ResetIK() {
}

void UBaseIKAnimGraphView::ResetFeet_Implementation() {
}

void UBaseIKAnimGraphView::CalculateSpineOffsets(const TArray<FName> spineBones, const float startSpineOffset, const float endSpineOffset, TArray<FVector>& OutOffsets) {
}

float UBaseIKAnimGraphView::CalculateHipHeightOffset(const FFootIKStruct LeftFoot, const FFootIKStruct RightFoot, const float OffsetWeight) const {
    return 0.0f;
}

UBaseIKAnimGraphView::UBaseIKAnimGraphView() {
    this->Mesh = NULL;
    this->DeltaTime = 0.00f;
    this->bDebugTrace = false;
    this->TraceDistanceAbove = 100.00f;
    this->TraceDistanceBelow = 100.00f;
    this->PositionOffsetInterpSpeed = 75.00f;
    this->RotationOffsetInterpSpeed = 75.00f;
    this->ReplantDistanceThreshold = 40.00f;
}

