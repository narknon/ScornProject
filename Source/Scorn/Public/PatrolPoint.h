#pragma once
#include "CoreMinimal.h"
#include "PatrolPoint.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPatrolPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Waypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimation;
    
    SCORN_API FPatrolPoint();
};

