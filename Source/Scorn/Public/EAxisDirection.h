#pragma once
#include "CoreMinimal.h"
#include "EAxisDirection.generated.h"

UENUM(BlueprintType)
enum EAxisDirection {
    Axis_Horizontal,
    Axis_Vertical,
    Axis_MAX UMETA(Hidden),
};

