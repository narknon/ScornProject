#pragma once
#include "CoreMinimal.h"
#include "EIUOWorkMode.generated.h"

UENUM(BlueprintType)
enum class EIUOWorkMode : uint8 {
    Undefined,
    UseItemInInventory,
    JustTakeItem,
    JustLeaveItem,
    TakeAndLeaveItem,
};

