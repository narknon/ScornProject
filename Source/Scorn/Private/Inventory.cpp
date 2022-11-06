#include "Inventory.h"

class USceneComponent;
class UItem;
class AWeapon;

void UInventory::UseHealthItem() {
}

void UInventory::SetAmmo(EWeapons WeaponType, uint8 AmmoToSet) {
}

void UInventory::ScornGameplayRemoveSpecialItem(uint8 SpecialItem) {
}

void UInventory::ScornGameplayRemoveItem(uint8 Item) {
}

void UInventory::ScornGameplayAddSpecialItem(uint8 SpecialItem) {
}

void UInventory::ScornGameplayAddItem(uint8 Item) {
}

void UInventory::ScornGameplayAddAmmo() {
}

void UInventory::RestoreHealthItems(const int32& NoOfItemsToRestore) {
}

void UInventory::RemoveWeapon(EWeapons Weapon) {
}

void UInventory::RemoveSpecialItem(const uint8& SpecialItemID, bool RemoveOwningActor) {
}

UItem* UInventory::RemoveItemByID(uint8 ID) {
    return NULL;
}

void UInventory::RemoveItem(UItem* Item) {
}

bool UInventory::IsInventoryEmpty() {
    return false;
}

void UInventory::InitItems() {
}

bool UInventory::HasWeapon(EWeapons Weapon) const {
    return false;
}

bool UInventory::HasSpecialItem(const uint8& SpecialItemID) const {
    return false;
}

bool UInventory::HasItem(uint8 ID) const {
    return false;
}

bool UInventory::GetWeapon(EWeapons Weapon, AWeapon*& OutWeaponObject) {
    return false;
}

bool UInventory::GetSpecialItemComponent(const uint8& SpecialItemID, USceneComponent*& OutItemComponent) {
    return false;
}

bool UInventory::GetNextItemEntry(FInventoryEntry& OutEntry) {
    return false;
}

int32 UInventory::GetMaxAmmoCount(EWeapons WeaponType) {
    return 0;
}

TArray<FInventoryEntry> UInventory::GetItemEntries() const {
    return TArray<FInventoryEntry>();
}

bool UInventory::GetInventoryEntry(uint8 ID, FInventoryEntry& OutEntry) {
    return false;
}


USceneComponent* UInventory::GetBulletSceneComponent(EWeapons WeaponType, const int32& Index) {
    return NULL;
}

int32 UInventory::GetAmmoCount(EWeapons WeaponType) {
    return 0;
}

bool UInventory::CanHeal() {
    return false;
}

void UInventory::AddWeaponObjectToCollection(EWeapons Weapon, AWeapon* WeaponObject) {
}

void UInventory::AddWeapon(EWeapons Weapon, bool OnLoad) {
}

void UInventory::AddSpecialItemObjectToCollection(const uint8& SpecialItemID, USceneComponent* SpecialItemObject) {
}

void UInventory::AddSpecialItem(const uint8& SpecialItemID) {
}

void UInventory::AddItemByID(const uint8& ItemId) {
}

void UInventory::AddItem(UItem* Item) {
}

void UInventory::AddHealthItem() {
}

void UInventory::AddAmmo(EWeapons WeaponType, uint8 AmmoToFill) {
}

UInventory::UInventory() {
    this->bDebug = false;
    this->MaxNoOfHealthItems = 8;
    this->NoOfHealthItems = 8;
    this->HealthItemHPAmmount = 1.00f;
}

