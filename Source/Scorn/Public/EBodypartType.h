#pragma once
#include "CoreMinimal.h"
#include "EBodypartType.generated.h"

UENUM(BlueprintType)
enum class EBodypartType : uint8 {
    Undefined,
    Head,
    Neck,
    Chest,
    Abdomen,
    ArmRight,
    ArmLeft,
    LegRight,
    LegLeft,
    LegFrontRight,
    LegFrontLeft,
    WeakSpot,
};

