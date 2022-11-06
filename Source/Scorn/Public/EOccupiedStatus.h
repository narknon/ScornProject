#pragma once
#include "CoreMinimal.h"
#include "EOccupiedStatus.generated.h"

UENUM(BlueprintType)
enum class EOccupiedStatus : uint8 {
    Passable,
    Static,
    Dynamic,
};

