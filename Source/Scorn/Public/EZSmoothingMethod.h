#pragma once
#include "CoreMinimal.h"
#include "EZSmoothingMethod.generated.h"

UENUM(BlueprintType)
enum class EZSmoothingMethod : uint8 {
    Off,
    On_Compression,
    On_EMA,
};

