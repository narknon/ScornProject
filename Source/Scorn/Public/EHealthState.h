#pragma once
#include "CoreMinimal.h"
#include "EHealthState.generated.h"

UENUM(BlueprintType)
enum class EHealthState : uint8 {
    Healthy,
    Wounded,
    Critical,
    Resurrected,
    Dead,
};

