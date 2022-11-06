#pragma once
#include "CoreMinimal.h"
#include "EScornSoundOutputDevice.generated.h"

UENUM(BlueprintType)
enum class EScornSoundOutputDevice : uint8 {
    Cinematic,
    TV,
    Surround,
};

