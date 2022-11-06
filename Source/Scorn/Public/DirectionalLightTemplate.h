#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialTemplate.h"
#include "DirectionalLightKeyProps.h"
#include "DirectionalLightTemplate.generated.h"

class UDirectionalLightComponent;

UCLASS(Blueprintable)
class SCORN_API ADirectionalLightTemplate : public ABaseSpatialTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* DirectionalLightComponent;
    
    ADirectionalLightTemplate();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDirectionalLightKeyProps GetOverridableProperties();
    
};

