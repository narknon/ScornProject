#pragma once
#include "CoreMinimal.h"
#include "SpotLightDefaultProperties.h"
#include "SavableActor.h"
#include "SpotLightTemplateProperties.h"
#include "PointLightDefaultProperties.h"
#include "DirectionalLightTemplateProperties.h"
#include "PointLightTemplateProperties.h"
#include "DirectionalLightDefaultProperties.h"
#include "DynamicLights.generated.h"

class USpotLightComponent;
class UPointLightComponent;
class UDirectionalLightComponent;

UCLASS(Blueprintable)
class SCORN_API ADynamicLights : public ASavableActor {
    GENERATED_BODY()
public:
    ADynamicLights();
    UFUNCTION(BlueprintCallable)
    void SetTemplateSpotLightValues(USpotLightComponent* Light, FSpotLightTemplateProperties A, FSpotLightTemplateProperties B, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetTemplatePointLightValues(UPointLightComponent* Light, FPointLightTemplateProperties A, FPointLightTemplateProperties B, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetTemplateDirectionalLightValues(UDirectionalLightComponent* Light, FDirectionalLightTemplateProperties A, FDirectionalLightTemplateProperties B, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalLightValues(UDirectionalLightComponent* Light, FDirectionalLightTemplateProperties Values);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSpotLightValues(USpotLightComponent* Light, FSpotLightDefaultProperties Defaults);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultPointLightValues(UPointLightComponent* Light, FPointLightDefaultProperties Defaults);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultDirectionalLightValues(UDirectionalLightComponent* Light, FDirectionalLightDefaultProperties Defaults);
    
};

