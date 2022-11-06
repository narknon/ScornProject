#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EAnimPose.h"
#include "AnimPathPoint.h"
#include "UObject/NoExportTypes.h"
#include "LocomotionAction.generated.h"

class ULocomotionAction;
class UBlendSpaceBase;

UCLASS(Blueprintable)
class SCORN_API ULocomotionAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendSpaceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPose StartingAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPose ResultingAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* AnimationBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimPathPoint> AnimPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimPathPoint> AnimPathWorld;
    
    ULocomotionAction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTranslation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformAtTime(float InTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimPose GetStartingAnimPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetResultingTransform(bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimPose GetResultingAnimPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlendSpaceParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpaceBase* GetAnimationBlendSpace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActionTime() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugAction(float Radius, int32 Segments, float ArrowLength, float Duration, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    ULocomotionAction* Copy();
    
};

