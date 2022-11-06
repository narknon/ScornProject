#pragma once
#include "CoreMinimal.h"
#include "EDamageType.h"
#include "EBodypartType.h"
#include "HitInfo.generated.h"

USTRUCT(BlueprintType)
struct FHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodypartType BodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageType DamageType;
    
    SCORN_API FHitInfo();
};

