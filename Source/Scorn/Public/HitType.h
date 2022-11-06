#pragma once
#include "CoreMinimal.h"
#include "HitType.generated.h"

UENUM(BlueprintType)
enum class HitType : uint8 {
    Block,
    Edge,
    Slide,
    UndefinedHit,
};

