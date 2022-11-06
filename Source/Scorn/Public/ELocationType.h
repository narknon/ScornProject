#pragma once
#include "CoreMinimal.h"
#include "ELocationType.generated.h"

UENUM(BlueprintType)
enum class ELocationType : uint8 {
    Default,
    Hole,
    Chain,
    Pile,
    Pod,
    Pipe,
};

