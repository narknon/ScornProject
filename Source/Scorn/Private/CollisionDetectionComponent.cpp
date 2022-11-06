#include "CollisionDetectionComponent.h"

class ULocomotionPlan;
class UAgentColliderComponent;


bool UCollisionDetectionComponent::IsCollisionDetected(UAgentColliderComponent* Agent, ULocomotionPlan* AgentPlan, float AgentSpeedMultiplier, float AgentRadius, FCollisionData& CollisionData) const {
    return false;
}

UCollisionDetectionComponent::UCollisionDetectionComponent() {
    this->TimeHorizonLength = 5.00f;
    this->HeadOnAngleThreshold = 10.00f;
    this->bDebugCollisionDetection = false;
}

