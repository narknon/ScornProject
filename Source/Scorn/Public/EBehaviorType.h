#pragma once
#include "CoreMinimal.h"
#include "EBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EBehaviorType : uint8 {
    Aggressive,
    Passive,
    Alert,
    Retreat,
    Engage,
    Disengage,
};

