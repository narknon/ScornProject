#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "BaseSpatialSource.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseSpatialSource : public ASavableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ABaseSpatialSource();
};

