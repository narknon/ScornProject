#pragma once
#include "CoreMinimal.h"
#include "FootIKLimits.h"
#include "AnimGraphViewComponent.h"
#include "FootIKStruct.h"
#include "UObject/NoExportTypes.h"
#include "BaseIKAnimGraphView.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UBaseIKAnimGraphView : public UAnimGraphViewComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SpineBoneNames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootIKLimits IKLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistanceAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistanceBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionOffsetInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationOffsetInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IKDisabledCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplantDistanceThreshold;
    
public:
    UBaseIKAnimGraphView();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSpine();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateIK(const float dTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    FFootIKStruct UpdateFootIK(FFootIKStruct foot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFeet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAnimGraph();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIKEnabled(const bool bEnableIK);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetSpine();
    
    UFUNCTION(BlueprintCallable)
    void ResetIK();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFeet();
    
    UFUNCTION(BlueprintCallable)
    void CalculateSpineOffsets(const TArray<FName> spineBones, const float startSpineOffset, const float endSpineOffset, TArray<FVector>& OutOffsets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateHipHeightOffset(const FFootIKStruct LeftFoot, const FFootIKStruct RightFoot, const float OffsetWeight) const;
    
};

