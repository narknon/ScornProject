#pragma once
#include "CoreMinimal.h"
#include "EWeapons.h"
#include "Components/ActorComponent.h"
#include "InventoryEntry.h"
#include "SpecialItemInventoryEntry.h"
#include "InventoryAmmo.h"
#include "Inventory.generated.h"

class AWeapon;
class USceneComponent;
class UItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UInventory : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponAdded, EWeapons, Weapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryAmmoChange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthItemChange);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialItemInventoryEntry> SpecialItems;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponAdded WeaponAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponAdded WeaponAddedAndInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWeapon*> Weapons;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryAmmoChange OnAmmoChangeDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryAmmo> InventoryAmmo;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthItemChange OnHealthItemChangeDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNoOfHealthItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoOfHealthItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthItemHPAmmount;
    
public:
    UInventory();
    UFUNCTION(BlueprintCallable)
    void UseHealthItem();
    
    UFUNCTION(BlueprintCallable)
    void SetAmmo(EWeapons WeaponType, uint8 AmmoToSet);
    
    UFUNCTION(Exec)
    void ScornGameplayRemoveSpecialItem(uint8 SpecialItem);
    
    UFUNCTION(Exec)
    void ScornGameplayRemoveItem(uint8 Item);
    
    UFUNCTION(Exec)
    void ScornGameplayAddSpecialItem(uint8 SpecialItem);
    
    UFUNCTION(Exec)
    void ScornGameplayAddItem(uint8 Item);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornGameplayAddAmmo();
    
    UFUNCTION(BlueprintCallable)
    void RestoreHealthItems(const int32& NoOfItemsToRestore);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWeapon(EWeapons Weapon);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpecialItem(const uint8& SpecialItemID, bool RemoveOwningActor);
    
    UFUNCTION(BlueprintCallable)
    UItem* RemoveItemByID(uint8 ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    bool IsInventoryEmpty();
    
    UFUNCTION(BlueprintCallable)
    void InitItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWeapon(EWeapons Weapon) const;
    
    UFUNCTION(BlueprintPure)
    bool HasSpecialItem(const uint8& SpecialItemID) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItem(uint8 ID) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetWeapon(EWeapons Weapon, AWeapon*& OutWeaponObject);
    
    UFUNCTION(BlueprintCallable)
    bool GetSpecialItemComponent(const uint8& SpecialItemID, USceneComponent*& OutItemComponent);
    
    UFUNCTION(BlueprintCallable)
    bool GetNextItemEntry(FInventoryEntry& OutEntry);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxAmmoCount(EWeapons WeaponType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInventoryEntry> GetItemEntries() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInventoryEntry(uint8 ID, FInventoryEntry& OutEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FString> GetDebugReport();
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetBulletSceneComponent(EWeapons WeaponType, const int32& Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmmoCount(EWeapons WeaponType);
    
    UFUNCTION(BlueprintCallable)
    bool CanHeal();
    
    UFUNCTION(BlueprintCallable)
    void AddWeaponObjectToCollection(EWeapons Weapon, AWeapon* WeaponObject);
    
    UFUNCTION(BlueprintCallable)
    void AddWeapon(EWeapons Weapon, bool OnLoad);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialItemObjectToCollection(const uint8& SpecialItemID, USceneComponent* SpecialItemObject);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialItem(const uint8& SpecialItemID);
    
    UFUNCTION(BlueprintCallable)
    void AddItemByID(const uint8& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void AddHealthItem();
    
    UFUNCTION(BlueprintCallable)
    void AddAmmo(EWeapons WeaponType, uint8 AmmoToFill);
    
};

