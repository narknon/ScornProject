#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialSource.h"
#include "DirectionalLightKeyProps.h"
#include "DirectionalLightSource.generated.h"

class USavableDirectionalLightComponent;
class ADirectionalLightTemplate;

UCLASS(Blueprintable)
class SCORN_API ADirectionalLightSource : public ABaseSpatialSource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDirectionalLightAnimation, FDirectionalLightKeyProps, TempResult);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USavableDirectionalLightComponent* DirectionalLightComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDirectionalLightAnimation OnAnimation;
    
    ADirectionalLightSource();
    UFUNCTION(BlueprintCallable)
    void PrepareSource(const FDirectionalLightKeyProps& inProperties);
    
    UFUNCTION(BlueprintCallable)
    void ApplyProperties(const FDirectionalLightKeyProps& inProperties, bool bSetLocation);
    
    UFUNCTION(BlueprintCallable)
    void AnimateTemplates(ADirectionalLightTemplate* DirectionalLightTemplates);
    
};

