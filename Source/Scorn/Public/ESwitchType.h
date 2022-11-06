#pragma once
#include "CoreMinimal.h"
#include "ESwitchType.generated.h"

UENUM(BlueprintType)
enum class ESwitchType : uint8 {
    Instant,
    Distributed,
};

