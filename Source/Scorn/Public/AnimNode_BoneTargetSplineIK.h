#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneControllers/AnimNode_SplineIK.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_BoneTargetSplineIK.generated.h"

USTRUCT(BlueprintType)
struct SCORN_API FAnimNode_BoneTargetSplineIK : public FAnimNode_SplineIK {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference EndBoneTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndBoneTargetLocationOffset;
    
    FAnimNode_BoneTargetSplineIK();
};

