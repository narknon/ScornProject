#include "WeaponSystem.h"

class AActor;
class AScornProjectile;

AActor* UWeaponSystem::GetEnemy() const {
    return NULL;
}

AScornProjectile* UWeaponSystem::FireProjectile(const FVector targetOffset) {
    return NULL;
}

UWeaponSystem::UWeaponSystem() {
    this->bScriptedNpc = false;
    this->ProjectileClass = NULL;
    this->AimIterations = 3;
    this->BufferLifetime = 0.10f;
    this->MaxShootPitch = 30.00f;
    this->bUseHighAngleProjectile = false;
}

