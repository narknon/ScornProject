#include "WeaponController.h"

void UWeaponController::SetWeaponInaccuracy(const float& Inaccuracy) {
}

bool UWeaponController::SetAiming(bool Flag) {
    return false;
}

void UWeaponController::RecoilEnd() {
}

void UWeaponController::LoadOneClip() {
}

bool UWeaponController::IsInventoryAmmoEnoughForReload() const {
    return false;
}

bool UWeaponController::IsEmpty() {
    return false;
}

bool UWeaponController::IsAiming() const {
    return false;
}

float UWeaponController::GetWeaponInaccuracy() const {
    return 0.0f;
}

int32 UWeaponController::GetMaxInventoryAmmoCount() const {
    return 0;
}

int32 UWeaponController::GetMaxAmmoCount() const {
    return 0;
}

int32 UWeaponController::GetInventoryAmmoCount() const {
    return 0;
}

int32 UWeaponController::GetAmmoCount() const {
    return 0;
}

bool UWeaponController::CanSwitchWeapon() const {
    return false;
}

bool UWeaponController::CanLoadAClip() {
    return false;
}

bool UWeaponController::CanFire() {
    return false;
}

bool UWeaponController::CanClipPeek() const {
    return false;
}

void UWeaponController::AddAmmoToInventory(uint8 InAmmoAmount) {
}

UWeaponController::UWeaponController() {
    this->Inventory = NULL;
    this->isSwitchingWeapon = false;
    this->inRecoil = false;
    this->CurrentWeapon = NULL;
    this->doReload = false;
    this->aiming = false;
    this->isPeeking = false;
    this->IsRaised = false;
    this->DebugPrint = false;
}

