#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EAnimPose.h"
#include "LocomotionPlan.generated.h"

class ULocomotionSegment;
class ULocomotionAction;
class ULocomotionPlan;

UCLASS(Blueprintable)
class SCORN_API ULocomotionPlan : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULocomotionSegment*> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlanTime;
    
public:
    ULocomotionPlan();
    UFUNCTION(BlueprintCallable)
    void UpdatePlanTime(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StopPlan(bool& IsEmpty);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRemainingSegments();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform PredictTransform(float DeltaSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyPlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformAtTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ULocomotionSegment*> GetSegments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetResultingTransform(bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimPose GetResultingAnimPose(bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlanTime() const;
    
    UFUNCTION(BlueprintCallable)
    ULocomotionSegment* GetNextSegment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocomotionSegment* GetLastSegment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocomotionAction* GetFirstAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocomotionSegment* GetCurrentSegment() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugPlan(float Radius, int32 SphereSegments, float ArrowLength, float Duration, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    ULocomotionPlan* Copy();
    
    UFUNCTION(BlueprintCallable)
    void AppendPlan(ULocomotionPlan* PlanToAppend);
    
    UFUNCTION(BlueprintCallable)
    void AddSegment(ULocomotionSegment* Segment);
    
};

