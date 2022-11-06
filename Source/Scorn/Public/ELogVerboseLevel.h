#pragma once
#include "CoreMinimal.h"
#include "ELogVerboseLevel.generated.h"

UENUM(BlueprintType)
enum class ELogVerboseLevel : uint8 {
    Base,
    High,
    Medium,
    Low,
};

