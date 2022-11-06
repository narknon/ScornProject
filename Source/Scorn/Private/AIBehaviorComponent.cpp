#include "AIBehaviorComponent.h"

void UAIBehaviorComponent::SetEnemyUnreachable(bool bUnreachable) {
}

void UAIBehaviorComponent::NotifyThreatenFinished() {
}

void UAIBehaviorComponent::NotifyLostEnemy() {
}

float UAIBehaviorComponent::GetMaximumVerticalDistance() const {
    return 0.0f;
}

float UAIBehaviorComponent::GetAlertExitRange() const {
    return 0.0f;
}

float UAIBehaviorComponent::GetAlertEnterRange() const {
    return 0.0f;
}

float UAIBehaviorComponent::GetAggressiveEnterRange() const {
    return 0.0f;
}

void UAIBehaviorComponent::ForceAggressive() {
}

UAIBehaviorComponent::UAIBehaviorComponent() {
    this->AggressiveEnterRange = 400.00f;
    this->AlertEnterRange = 700.00f;
    this->AlertExitRange = 1000.00f;
    this->MaximumVerticalDistance = 400.00f;
    this->ForceAggressionTimeLimit = 10.00f;
    this->bDebugBehaviorRanges = false;
}

