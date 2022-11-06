#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavableActor.h"
#include "BaseProceduralSplineLocation.generated.h"

class USplineComponent;
class UCameraComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseProceduralSplineLocation : public ASavableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ListenerCamera;
    
public:
    ABaseProceduralSplineLocation();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceAlongSplineForWorldLocation(FVector Location) const;
    
};

