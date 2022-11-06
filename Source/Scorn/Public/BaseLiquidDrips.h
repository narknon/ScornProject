#pragma once
#include "CoreMinimal.h"
#include "BaseLiquid.h"
#include "BaseLiquidDrips.generated.h"

UCLASS(Blueprintable)
class SCORN_API ABaseLiquidDrips : public ABaseLiquid {
    GENERATED_BODY()
public:
    ABaseLiquidDrips();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDecalMaterialForVerticalDrips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDecalMaterialForHorizontalDrips();
    
};

