#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "GameplaySavableActor.generated.h"

class AStaticMeshActor;

UCLASS(Blueprintable)
class SCORN_API AGameplaySavableActor : public ASavableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AStaticMeshActor> SnapPoint;
    
public:
    AGameplaySavableActor();
protected:
    UFUNCTION(BlueprintCallable)
    void SnapToPoint();
    
};

