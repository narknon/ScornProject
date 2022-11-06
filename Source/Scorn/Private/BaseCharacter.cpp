#include "BaseCharacter.h"

class ACharacter;
class ABaseCharacter;


void ABaseCharacter::SetAsMobile() {
}

void ABaseCharacter::SetAsImmobile() {
}

void ABaseCharacter::PostLoadSetPositionAndRotation_Implementation(const FVector& Position, const FRotator& Rotation) {
}




void ABaseCharacter::HandleHit(float Damage, FVector HitVector, ACharacter* DamageDealer, ESpecialAttackType SpecialAttackType) {
}

void ABaseCharacter::HandleDeath(ABaseCharacter* BaseCharacter) {
}

ABaseCharacter::ABaseCharacter() {
    this->bInitialized = false;
    this->RootHalfHeight = 0.00f;
    this->RootRadius = 0.00f;
    this->HealthController = NULL;
    this->IsFlyingCharacter = false;
    this->WalkSpeed = 0.00f;
    this->JogSpeed = 0.00f;
    this->RunSpeed = 0.00f;
    this->MoveState = EMovementState::Standing;
    this->BaseCrawlSpeed = 0.00f;
    this->FootstepDistanceTreshold = 0.00f;
    this->GunshotDistanceTreshold = 0.00f;
}

