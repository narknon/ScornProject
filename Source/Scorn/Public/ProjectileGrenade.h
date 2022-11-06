#pragma once
#include "CoreMinimal.h"
#include "ScornProjectile.h"
#include "Engine/EngineTypes.h"
#include "ProjectileGrenade.generated.h"

class AActor;

UCLASS(Blueprintable)
class SCORN_API AProjectileGrenade : public AScornProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HurtRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HurtDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MCDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> DetonationBlockingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
public:
    AProjectileGrenade();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetonate(const TArray<AActor*>& HitActors);
    
    UFUNCTION(BlueprintCallable)
    void Detonate();
    
};

