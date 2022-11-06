#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "BaseSpatialAnimationKey.generated.h"

UCLASS(Abstract, Blueprintable)
class SCORN_API ABaseSpatialAnimationKey : public ASavableActor {
    GENERATED_BODY()
public:
    ABaseSpatialAnimationKey();
    UFUNCTION(BlueprintCallable)
    float GetWeight();
    
};

