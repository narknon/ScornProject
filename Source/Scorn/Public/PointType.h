#pragma once
#include "CoreMinimal.h"
#include "PointType.generated.h"

UENUM(BlueprintType)
enum class PointType : uint8 {
    Clear,
    Border,
    Undefined,
};

