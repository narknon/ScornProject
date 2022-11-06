#pragma once
#include "CoreMinimal.h"
#include "Weapon.h"
#include "WeaponMelee.generated.h"

UCLASS(Blueprintable)
class SCORN_API AWeaponMelee : public AWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaShootCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
public:
    AWeaponMelee();
    UFUNCTION(BlueprintCallable)
    bool IsEmpty();
    
};

