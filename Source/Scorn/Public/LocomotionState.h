#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAnimPose.h"
#include "UObject/NoExportTypes.h"
#include "LocomotionState.generated.h"

UCLASS(Blueprintable)
class SCORN_API ULocomotionState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPose AnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    ULocomotionState();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimPose GetAnimPose() const;
    
};

