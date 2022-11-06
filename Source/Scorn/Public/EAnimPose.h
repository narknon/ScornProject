#pragma once
#include "CoreMinimal.h"
#include "EAnimPose.generated.h"

UENUM(BlueprintType)
enum class EAnimPose : uint8 {
    Idle,
    Walk,
    Run,
};

