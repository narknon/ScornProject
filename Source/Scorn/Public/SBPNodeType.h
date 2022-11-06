#pragma once
#include "CoreMinimal.h"
#include "SBPNodeType.generated.h"

UENUM(BlueprintType)
enum class SBPNodeType : uint8 {
    EMPTY,
    SINGLE,
    SINGLE_TARGET,
    SINGLE_REMAINS,
    HORIZONTAL_DOUBLE,
    VERTICAL_DOUBLE,
    VERTICAL_DOUBLE_TARGET,
    QUADRUPLE,
    OBSTACLE,
};

