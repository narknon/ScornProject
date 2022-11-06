#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Weapon.h"
#include "UObject/NoExportTypes.h"
#include "WeaponGrenadeLauncher.generated.h"

UCLASS(Blueprintable)
class SCORN_API AWeaponGrenadeLauncher : public AWeapon {
    GENERATED_BODY()
public:
    AWeaponGrenadeLauncher();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnSpecialLerpedGrenade(const FVector SpawnLocation, const FRotator SpawnRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AimingAtSpecialGrenadeTarget();
    
};

