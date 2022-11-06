#pragma once
#include "CoreMinimal.h"
#include "EFMODEventPlaybackState.generated.h"

UENUM(BlueprintType)
enum class EFMODEventPlaybackState : uint8 {
    UNDEFINED,
    PLAYING,
    SUSTAINING,
    STOPPED,
    STARTING,
    STOPPING,
};

