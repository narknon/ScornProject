#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAnimPose.h"
#include "UObject/NoExportTypes.h"
#include "LocomotionActionDataAsset.generated.h"

class UBlendSpaceBase;
class UBlendSpaceDataAsset;

UCLASS(Blueprintable)
class SCORN_API ULocomotionActionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPose StartingAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPose ResultingAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceDataAsset* BlendSpaceDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BlendSpaceParameterRange;
    
public:
    ULocomotionActionDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimPose GetStartingAnimPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimPose GetResultingAnimPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMaxPositionOffsets() const;
    
    UFUNCTION(BlueprintCallable)
    UBlendSpaceBase* GetBlendSpace(float BlendParameter) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckActionForErrors();
    
};

