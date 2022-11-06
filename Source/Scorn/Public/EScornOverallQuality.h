#pragma once
#include "CoreMinimal.h"
#include "EScornOverallQuality.generated.h"

UENUM(BlueprintType)
enum class EScornOverallQuality : uint8 {
    Low,
    Medium,
    High,
    Recommended,
    Custom,
};

