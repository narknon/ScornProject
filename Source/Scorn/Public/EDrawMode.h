#pragma once
#include "CoreMinimal.h"
#include "EDrawMode.generated.h"

UENUM(BlueprintType)
enum class EDrawMode : uint8 {
    SingleLogEntry,
    AllEntries,
};

