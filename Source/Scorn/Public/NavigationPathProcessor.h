#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavigationPathProcessor.generated.h"

class ULocomotionAction;
class ULocomotionState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UNavigationPathProcessor : public UActorComponent {
    GENERATED_BODY()
public:
    UNavigationPathProcessor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectToNavMesh(FVector Point, FVector& ProjectedLocation);
    
    UFUNCTION(BlueprintCallable)
    ULocomotionAction* KeepActionOnNavMesh(ULocomotionAction* Action, FTransform StartTransform);
    
    UFUNCTION(BlueprintCallable)
    TArray<FTransform> GetUndoActionProjectedPath(const ULocomotionAction* Action, const ULocomotionState* State);
    
    UFUNCTION(BlueprintCallable)
    TArray<FTransform> GetApplyActionProjectedPath(const ULocomotionAction* Action, const ULocomotionState* State);
    
};

