#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MistPlane.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class SCORN_API AMistPlane : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* MainCharacter;
    
public:
    AMistPlane();
protected:
    UFUNCTION(BlueprintCallable)
    void RotateTowardsPlayer();
    
};

