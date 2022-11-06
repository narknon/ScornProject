#include "EuHeadScripted.h"
#include "Components/CapsuleComponent.h"

void AEuHeadScripted::SetSteeringPower() {
}

FVector AEuHeadScripted::CombineVectors() {
    return FVector{};
}

void AEuHeadScripted::CalculateCohesionGoal() {
}

void AEuHeadScripted::CalculateAlignmentVector() {
}

void AEuHeadScripted::CalculateAdhesionDirectionAndForce() {
}

AEuHeadScripted::AEuHeadScripted() {
    this->Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->HeadManager = NULL;
    this->DebugCohesion = false;
    this->DebugAdhesion = false;
    this->DebugAlignment = false;
    this->CohesionForce = 0.00f;
    this->CohesionRadius = 0.00f;
    this->AdhesionForce = 0.00f;
    this->AdhesionAffectsVelocity = 0.00f;
    this->AdhesionVelocity = 0.00f;
    this->AdhesionRadius = 0.00f;
    this->AlignmentForce = 0.00f;
    this->AlignmentRadius = 0.00f;
    this->HeadManagerForce = 0.00f;
    this->ObstacleEvasionForce = 0.00f;
    this->SteeringPower = 0.00f;
    this->SteeringModifier = 0.00f;
}

