#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EAnimPose.h"
#include "UObject/NoExportTypes.h"
#include "LocomotionSegment.generated.h"

class ULocomotionAction;
class ULocomotionSegment;

UCLASS(Blueprintable)
class SCORN_API ULocomotionSegment : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULocomotionAction*> Actions;
    
public:
    ULocomotionSegment();
    UFUNCTION(BlueprintCallable)
    bool RemoveRemainingActions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformAtTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSegmentTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetResultingTransform(bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimPose GetResultingAnimPose() const;
    
    UFUNCTION(BlueprintCallable)
    ULocomotionAction* GetNextAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocomotionAction* GetLastAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocomotionAction* GetFirstAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULocomotionAction*> GetActions() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugSegment(float Radius, int32 Segments, float ArrowLength, float Duration, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    ULocomotionSegment* Copy();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyDeltaCorrection(const FTransform StartTransform, const FTransform EndTransform, const FTransform GoalTransform);
    
    UFUNCTION(BlueprintCallable)
    void AddActionToFront(ULocomotionAction* Action);
    
    UFUNCTION(BlueprintCallable)
    void AddAction(ULocomotionAction* Action);
    
};

