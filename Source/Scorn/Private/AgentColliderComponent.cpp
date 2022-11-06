#include "AgentColliderComponent.h"

void UAgentColliderComponent::StartMoving() {
}

void UAgentColliderComponent::SetSpeedMultiplier(float InSpeedMultiplier) {
}

FTransform UAgentColliderComponent::PredictTransform(float DeltaSeconds) const {
    return FTransform{};
}

bool UAgentColliderComponent::IsMoving() const {
    return false;
}

bool UAgentColliderComponent::IsCollisionEnabled() const {
    return false;
}

bool UAgentColliderComponent::HasPlan() const {
    return false;
}

float UAgentColliderComponent::GetSpeedMultiplier() const {
    return 0.0f;
}

UAgentColliderComponent::UAgentColliderComponent() {
    this->AgentPlan = NULL;
    this->bIsMoving = false;
    this->MaxAnimSpeed = 200.00f;
}

