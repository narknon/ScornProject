#pragma once
#include "CoreMinimal.h"
#include "EKeyID.generated.h"

UENUM(BlueprintType)
enum class EKeyID : uint8 {
    Aim,
    Cancel,
    Reload,
    Forward,
    Right,
    Run,
    Heal,
};

