#pragma once
#include "CoreMinimal.h"
#include "EHighlightState.generated.h"

UENUM(BlueprintType)
enum class EHighlightState : uint8 {
    Normal,
    TooFar,
    CannotUse,
    CanUse,
};

