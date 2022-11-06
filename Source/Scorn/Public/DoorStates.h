#pragma once
#include "CoreMinimal.h"
#include "DoorStates.generated.h"

UENUM(BlueprintType)
enum class DoorStates : uint8 {
    Closed,
    Opened,
    StartClosing,
    StartOpening,
    Blocked,
};

