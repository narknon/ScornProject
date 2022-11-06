#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"

class USceneComponent;

void AWeapon::UpdateLoadedAmmo_Implementation(int32 InAmmoCount) {
}

void AWeapon::Shoot() {
}

void AWeapon::SetWeaponFireReferencePoint(USceneComponent* ReferencePoint, const float& ReferencePointOffset) {
}

void AWeapon::SetupLoadedAmmo(uint8 InMaxAmmo, uint8 InAmmoCount) {
}

void AWeapon::SetHidden(bool Flag) {
}

void AWeapon::SetEnabled_Implementation(bool Flag) {
}





USceneComponent* AWeapon::InstantiateBullet_Implementation(const int32& BulletIndex, const FName& BulletSocketName) {
    return NULL;
}


EWeapons AWeapon::GetWeaponType() const {
    return EWeapons::None;
}

USkeletalMeshComponent* AWeapon::GetWeaponMesh() const {
    return NULL;
}

int32 AWeapon::GetNoOfBulletsPerShot() const {
    return 0;
}


void AWeapon::DestroyBullet(int32 Index) {
}

FVector AWeapon::CalculateFirePointLocation() const {
    return FVector{};
}

USceneComponent* AWeapon::AddBulletToWeapon_Implementation(int32 InAmmoCount) {
    return NULL;
}

AWeapon::AWeapon() {
    this->FireSound = NULL;
    this->DryFireSound = NULL;
    this->WeaponFireReferencePoint = NULL;
    this->AmmoMesh = NULL;
    this->WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->WeaponType = EWeapons::None;
    this->ProjectileClass = NULL;
    this->MaxAmmo = 0;
    this->AmmoCount = 0;
}

