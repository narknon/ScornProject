#include "BaseHealthController.h"

class ACharacter;

void UBaseHealthController::ForceSetDead() {
}

void UBaseHealthController::ApplyDamage(float Damage, FVector HitVector, ACharacter* DamageDealer, ESpecialAttackType SpecialAttackType) {
}

UBaseHealthController::UBaseHealthController() {
    this->Health = 0.00f;
    this->MaxHealth = 0.00f;
    this->Dead = false;
}

