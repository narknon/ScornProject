#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SkeletalBodypartInfo.h"
#include "BodyPartHitData.generated.h"

USTRUCT(BlueprintType)
struct FBodyPartHitData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkeletalBodypartInfo BodyPartInfo;
    
public:
    SCORN_API FBodyPartHitData();
};

