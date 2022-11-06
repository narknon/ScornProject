#pragma once
#include "CoreMinimal.h"
#include "EBodypartType.h"
#include "EBodypartDescriptor.h"
#include "SkeletalBodypartInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalBodypartInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodypartType BodyPartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBodypartDescriptor> BodyPartDescription;
    
public:
    SCORN_API FSkeletalBodypartInfo();
};

