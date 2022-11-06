#pragma once
#include "CoreMinimal.h"
#include "BloodFlowElements.h"
#include "BloodDrips.generated.h"

UCLASS(Blueprintable)
class SCORN_API ABloodDrips : public ABloodFlowElements {
    GENERATED_BODY()
public:
    ABloodDrips();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDecalMaterialForSplashes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDecalMaterialForDrips();
    
};

