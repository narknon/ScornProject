#pragma once
#include "CoreMinimal.h"
#include "FootIKOffsets.h"
#include "FootIKStruct.generated.h"

USTRUCT(BlueprintType)
struct FFootIKStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VirtualAncleBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VirtualGroundBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroundCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootIKOffsets AnkleOffset;
    
    SCORN_API FFootIKStruct();
};

