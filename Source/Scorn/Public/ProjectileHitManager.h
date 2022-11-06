#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileHitManager.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShutgunLineTraceHit);

UCLASS(Blueprintable)
class SCORN_API AProjectileHitManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShutgunLineTraceHit OnShotgunHit;
    
    AProjectileHitManager();
};

