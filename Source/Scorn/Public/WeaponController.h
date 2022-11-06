#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponController.generated.h"

class UInventory;
class AWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UWeaponController : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShoot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReload, bool, IsWeaponFull, bool, IsInventoryEmpty);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSwitchingWeapon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool inRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool doReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool aiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPeeking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRaised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugPrint;
    
public:
    UWeaponController();
    UFUNCTION(BlueprintCallable)
    void SetWeaponInaccuracy(const float& Inaccuracy);
    
    UFUNCTION(BlueprintCallable)
    bool SetAiming(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void RecoilEnd();
    
    UFUNCTION(BlueprintCallable)
    void LoadOneClip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryAmmoEnoughForReload() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponInaccuracy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxInventoryAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventoryAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwitchWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanLoadAClip();
    
    UFUNCTION(BlueprintCallable)
    bool CanFire();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanClipPeek() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAmmoToInventory(uint8 InAmmoAmount);
    
};

