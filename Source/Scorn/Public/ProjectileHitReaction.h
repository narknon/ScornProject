#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileHitReaction.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class SCORN_API AProjectileHitReaction : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    AProjectileHitReaction();
};

