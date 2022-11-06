#pragma once
#include "CoreMinimal.h"
#include "EItemUseMode.generated.h"

UENUM(BlueprintType)
enum class EItemUseMode : uint8 {
    Undefined,
    UseInPlace,
    LeaveItemInWorld,
    TakeItemFromWorld,
};

