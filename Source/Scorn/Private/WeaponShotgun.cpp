#include "WeaponShotgun.h"

AWeaponShotgun::AWeaponShotgun() {
    this->LineTraceNO = 0;
    this->BlastDistance = 0.00f;
    this->BlastDistanceThreshold = 0.00f;
    this->BlastAngle = 0.00f;
    this->BlastAngleThreshold = 0.00f;
    this->HurtDistance = 0.00f;
    this->HurtAngle = 0.00f;
    this->ProjectileHitManagerBP = NULL;
    this->BlastDistanceSquared = 0.00f;
    this->BlastAngleCos = 0.00f;
    this->HurtDistanceSquared = 0.00f;
    this->HurtAngleCos = 0.00f;
    this->HurtDamage = 1.00f;
    this->BlastDamage = 10.00f;
    this->bDebugDraw = false;
}

