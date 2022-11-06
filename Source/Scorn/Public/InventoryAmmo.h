#pragma once
#include "CoreMinimal.h"
#include "EWeapons.h"
#include "InventoryAmmo.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FInventoryAmmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeapons> WeaponTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> AmmoComponentCollection;
    
    SCORN_API FInventoryAmmo();
};

