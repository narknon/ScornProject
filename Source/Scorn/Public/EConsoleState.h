#pragma once
#include "CoreMinimal.h"
#include "EConsoleState.generated.h"

UENUM(BlueprintType)
enum class EConsoleState : uint8 {
    Idle,
    UseStart,
    InUse,
    UseEnd,
};

