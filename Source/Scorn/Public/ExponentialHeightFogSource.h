#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialSource.h"
#include "ExponentialHeightFogKeyProps.h"
#include "ExponentialHeightFogSource.generated.h"

class AExponentialHeightFogTemplate;
class USavableExponentialFogComponent;

UCLASS(Blueprintable)
class SCORN_API AExponentialHeightFogSource : public ABaseSpatialSource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExponentialFogAnimation, FExponentialHeightFogKeyProps, TempResult);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExponentialFogAnimation OnAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USavableExponentialFogComponent* ExponentialComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AExponentialHeightFogTemplate*> SourceTemplates;
    
public:
    AExponentialHeightFogSource();
    UFUNCTION(BlueprintCallable)
    void SetFogHeightFalloffProps(float PrimaryValue, float SecondaryValue, float StaticLightScattering);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaults();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentState();
    
    UFUNCTION(BlueprintCallable)
    void ApplyProperties(const FExponentialHeightFogKeyProps& inProperties, bool bSetLocation, bool bSkipFogFalloff);
    
    UFUNCTION(BlueprintCallable)
    void AnimateTemplates(TArray<AExponentialHeightFogTemplate*> ExpoTemplates);
    
};

