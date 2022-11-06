#include "AnimGraphViewComponent.h"

class UBaseNPCAnimInstance;

void UAnimGraphViewComponent::Init_Implementation(UBaseNPCAnimInstance* Graph) {
}

float UAnimGraphViewComponent::GetSteeringAlpha() const {
    return 0.0f;
}

UAnimGraphViewComponent::UAnimGraphViewComponent() {
    this->AnimGraph = NULL;
}

