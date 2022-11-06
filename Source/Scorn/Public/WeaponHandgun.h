#pragma once
#include "CoreMinimal.h"
#include "Weapon.h"
#include "WeaponHandgun.generated.h"

UCLASS(Blueprintable)
class SCORN_API AWeaponHandgun : public AWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToCrosshairPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeOffset;
    
public:
    AWeaponHandgun();
};

