#pragma once
#include "CoreMinimal.h"
#include "EUseFailAnimation.generated.h"

UENUM(BlueprintType)
enum class EUseFailAnimation : uint8 {
    Undefined,
    DoorKeyFail,
    CorruptionFail,
    UseConsoleKeyFail,
};

