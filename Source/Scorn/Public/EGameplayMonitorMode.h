#pragma once
#include "CoreMinimal.h"
#include "EGameplayMonitorMode.generated.h"

UENUM(BlueprintType)
enum class EGameplayMonitorMode : uint8 {
    Log,
    Draw,
    HeatMap,
    None,
};

