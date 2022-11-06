#pragma once
#include "CoreMinimal.h"
#include "EDoorKeyPatterns.generated.h"

UENUM(BlueprintType)
enum class EDoorKeyPatterns : uint8 {
    Key_A,
    Key_B,
    Key_C,
    Key_D,
    Key_E,
    Key_F,
    Key_MAX UMETA(Hidden),
};

