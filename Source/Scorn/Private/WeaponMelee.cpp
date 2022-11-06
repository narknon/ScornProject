#include "WeaponMelee.h"

bool AWeaponMelee::IsEmpty() {
    return false;
}

AWeaponMelee::AWeaponMelee() {
    this->bIsReady = false;
    this->Stamina = 1.00f;
    this->StaminaShootCost = 0.00f;
    this->Damage = 0.00f;
}

