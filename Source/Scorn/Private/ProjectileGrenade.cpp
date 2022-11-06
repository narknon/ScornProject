#include "ProjectileGrenade.h"


void AProjectileGrenade::Detonate() {
}

AProjectileGrenade::AProjectileGrenade() {
    this->HurtRange = 0.00f;
    this->BlastRange = 0.00f;
    this->BlastDamage = 0.00f;
    this->HurtDamage = 0.00f;
    this->MCDamageMultiplier = 1.00f;
    this->bDrawDebug = false;
}

