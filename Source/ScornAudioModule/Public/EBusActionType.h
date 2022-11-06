#pragma once
#include "CoreMinimal.h"
#include "EBusActionType.generated.h"

UENUM(BlueprintType)
enum class EBusActionType : uint8 {
    Pause,
    Unpause,
    Mute,
    Unmute,
    Stop,
};

