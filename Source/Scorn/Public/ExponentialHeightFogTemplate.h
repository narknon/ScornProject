#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialTemplate.h"
#include "ExponentialHeightFogKeyProps.h"
#include "ExponentialHeightFogTemplate.generated.h"

class UExponentialHeightFogComponent;

UCLASS(Blueprintable)
class SCORN_API AExponentialHeightFogTemplate : public ABaseSpatialTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* ExponentialFogComponent;
    
    AExponentialHeightFogTemplate();
    UFUNCTION(BlueprintCallable)
    void SetOverrideLightColors(UExponentialHeightFogComponent* SourceExponentialFog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FExponentialHeightFogKeyProps GetOverridableProperties();
    
};

