#pragma once
#include "CoreMinimal.h"
#include "ProjectileGrenade.h"
#include "Engine/EngineTypes.h"
#include "ProjectileBounceGrenade.generated.h"

UCLASS(Blueprintable)
class SCORN_API AProjectileBounceGrenade : public AProjectileGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeActivateTime;
    
public:
    AProjectileBounceGrenade();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateGrenade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttachToTarget(const FHitResult& Hit);
    
};

