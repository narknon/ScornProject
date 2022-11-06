#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialAnimZone.h"
#include "FogSources.h"
#include "SkyLightSources.h"
#include "DirectionalLightSources.h"
#include "BaseFogZone.generated.h"

class AExponentialHeightFogTemplate;

UCLASS(Blueprintable)
class SCORN_API ABaseFogZone : public ABaseSpatialAnimZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFogSources FogSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyLightSources SkyLightSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionalLightSources DirectionalLightSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AExponentialHeightFogTemplate*> ExpoTemplates;
    
    ABaseFogZone();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkyLightSources GetSkylightSources();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFogSources GetFogSources();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDirectionalLightSources GetDirectionalLightSources();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawDebugZones(bool bShouldDraw);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Animate();
    
};

