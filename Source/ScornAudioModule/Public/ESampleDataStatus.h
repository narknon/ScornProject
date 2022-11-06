#pragma once
#include "CoreMinimal.h"
#include "ESampleDataStatus.generated.h"

UENUM(BlueprintType)
enum class ESampleDataStatus : uint8 {
    Unloading,
    Unloaded,
    Loading,
    Loaded,
    Error,
};

