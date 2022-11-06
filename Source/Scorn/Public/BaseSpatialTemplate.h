#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseSpatialTemplate.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseSpatialTemplate : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TemplateSelected;
    
public:
    ABaseSpatialTemplate();
    UFUNCTION(BlueprintCallable)
    void SetWeight(const float& inWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight();
    
};

