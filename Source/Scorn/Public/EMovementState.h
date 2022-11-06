#pragma once
#include "CoreMinimal.h"
#include "EMovementState.generated.h"

UENUM(BlueprintType)
enum class EMovementState : uint8 {
    Standing,
    Walking,
    Running,
    Immobile,
    Crawling,
};

