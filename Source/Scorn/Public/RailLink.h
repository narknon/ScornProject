#pragma once
#include "CoreMinimal.h"
#include "ESplinePosition.h"
#include "RailLink.generated.h"

class ARail;

USTRUCT(BlueprintType)
struct FRailLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARail* Rail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplinePosition PositionOnLinkedRail;
    
    SCORN_API FRailLink();
};

