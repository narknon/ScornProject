#pragma once
#include "CoreMinimal.h"
#include "ELocationPivot.generated.h"

UENUM(BlueprintType)
enum class ELocationPivot : uint8 {
    Default,
    Center,
    Left,
    Right,
};

