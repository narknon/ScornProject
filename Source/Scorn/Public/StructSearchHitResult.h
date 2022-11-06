#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SearchStatus.h"
#include "HitType.h"
#include "StructSearchHitResult.generated.h"

USTRUCT(BlueprintType)
struct SCORN_API FStructSearchHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SearchStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HitType Type;
    
    FStructSearchHitResult();
};

