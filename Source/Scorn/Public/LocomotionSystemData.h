#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAnimPose.h"
#include "UObject/NoExportTypes.h"
#include "LocomotionSystemData.generated.h"

class ULocomotionState;
class ABaseNPC;
class ULocomotionAction;
class ULocomotionActionDataAsset;

UCLASS(Blueprintable)
class SCORN_API ULocomotionSystemData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocomotionSystemData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULocomotionState* MakeLocomotionState(const EAnimPose AnimPose, const FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULocomotionAction* MakeLocomotionAction(ABaseNPC* NPCOwner, const ULocomotionActionDataAsset* LocomotionActionDataAsset, const float BlendSpaceParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreLocomotionStateEqual(const ULocomotionState* LocomotionState1, const ULocomotionState* LocomotionState2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAnimPoseEqual(const EAnimPose AnimPose1, const EAnimPose AnimPose2);
    
};

