#pragma once
#include "CoreMinimal.h"
#include "ProjectileGrenade.h"
#include "ProjectileStickyGrenade.generated.h"

UCLASS(Blueprintable)
class SCORN_API AProjectileStickyGrenade : public AProjectileGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetonationTime;
    
public:
    AProjectileStickyGrenade();
};

