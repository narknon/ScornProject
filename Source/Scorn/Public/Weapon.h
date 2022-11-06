#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EWeapons.h"
#include "UObject/NoExportTypes.h"
#include "Weapon.generated.h"

class AScornProjectile;
class UFMODEvent;
class USkeletalMeshComponent;
class USceneComponent;
class USkeletalMesh;

UCLASS(Blueprintable)
class SCORN_API AWeapon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DryFireSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WeaponFireReferencePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* AmmoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> Ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeapons WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AScornProjectile> ProjectileClass;
    
    UPROPERTY(EditAnywhere)
    uint8 MaxAmmo;
    
    UPROPERTY(EditAnywhere)
    uint8 AmmoCount;
    
public:
    AWeapon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLoadedAmmo(int32 InAmmoCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void Shoot();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponFireReferencePoint(USceneComponent* ReferencePoint, const float& ReferencePointOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetupLoadedAmmo(uint8 InMaxAmmo, uint8 InAmmoCount);
    
    UFUNCTION(BlueprintCallable)
    void SetHidden(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnabled(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAim(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShootAnimStart(bool DryFire);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShoot(bool DryFire);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecoilEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* InstantiateBullet(const int32& BulletIndex, const FName& BulletSocketName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeapons GetWeaponType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetWeaponMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNoOfBulletsPerShot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetAmmoSocketName(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyBullet(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateFirePointLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* AddBulletToWeapon(int32 InAmmoCount);
    
};

