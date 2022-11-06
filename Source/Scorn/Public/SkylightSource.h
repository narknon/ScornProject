#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialSource.h"
#include "SkyLightKeyProps.h"
#include "SkylightSource.generated.h"

class USavableSkylightComponent;
class ASkyLightTemplate;

UCLASS(Blueprintable)
class SCORN_API ASkylightSource : public ABaseSpatialSource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkylightAnimation, FSkyLightKeyProps, TempResult);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkylightAnimation OnAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USavableSkylightComponent* SkyLightComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkyLightTemplate*> SourceTemplates;
    
public:
    ASkylightSource();
    UFUNCTION(BlueprintCallable)
    FString GetCurrentState();
    
    UFUNCTION(BlueprintCallable)
    void ApplyProperties(const FSkyLightKeyProps& inProperties, bool bSetLocation);
    
    UFUNCTION(BlueprintCallable)
    void AnimateTemplates(TArray<ASkyLightTemplate*> SkyLightTemplate);
    
};

