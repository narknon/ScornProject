#pragma once
#include "CoreMinimal.h"
#include "EHighlightAnimation.generated.h"

UENUM(BlueprintType)
enum class EHighlightAnimation : uint8 {
    Normal_TooFar,
    Normal_CannotUse,
    Normal_CanUse,
    TooFar_CannotUse,
    TooFar_CanUse,
    CanUse_CannotUse,
};

