#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LocationUseComponent.generated.h"

class ANPC_LocationObject;
class UPivotComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API ULocationUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULocationUseComponent();
    UFUNCTION(BlueprintCallable)
    void SnapOwnerToLocation(ANPC_LocationObject* Location, UPivotComponent* Pivot);
    
    UFUNCTION(BlueprintCallable)
    void OnExitLocation(ANPC_LocationObject* Location);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterLocation(ANPC_LocationObject* Location);
    
};

