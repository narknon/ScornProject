#include "PatrolComponent.h"

class ANPC_LocationObject;

bool UPatrolComponent::ShouldTeleport(ANPC_LocationObject*& OutTeleportLocation) const {
    return false;
}

void UPatrolComponent::SetPatrolCooldown(float InCooldown) {
}

void UPatrolComponent::ResetPatrolCooldown() {
}

void UPatrolComponent::IncrementPatrolPointIndex() {
}

float UPatrolComponent::GetPatrolCooldown() const {
    return 0.0f;
}

FPatrolPoint UPatrolComponent::GetNextPatrolPoint() const {
    return FPatrolPoint{};
}

int32 UPatrolComponent::GetCurrentPatrolPointIndex() const {
    return 0;
}

void UPatrolComponent::DrawPatrolPath(float SphereRadius, FVector Offset, float Duration, float Thickness) {
}

UPatrolComponent::UPatrolComponent() {
    this->bCircularPath = false;
    this->bPatrolOnce = false;
    this->MinPatrolCooldown = 1.00f;
    this->MaxPatrolCooldown = 3.00f;
    this->bEnterHoleOnlyOnce = false;
    this->DisengageCooldown = 15.00f;
}

