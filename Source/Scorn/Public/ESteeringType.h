#pragma once
#include "CoreMinimal.h"
#include "ESteeringType.generated.h"

UENUM(BlueprintType)
enum class ESteeringType : uint8 {
    Walk,
    Run,
    Attack,
};

