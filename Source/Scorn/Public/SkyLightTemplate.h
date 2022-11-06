#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialTemplate.h"
#include "SkyLightKeyProps.h"
#include "SkyLightTemplate.generated.h"

class USkyLightComponent;

UCLASS(Blueprintable)
class SCORN_API ASkyLightTemplate : public ABaseSpatialTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLightComponent;
    
    ASkyLightTemplate();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyLightKeyProps GetOverridableProperties();
    
};

