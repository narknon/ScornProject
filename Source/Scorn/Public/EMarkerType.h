#pragma once
#include "CoreMinimal.h"
#include "EMarkerType.generated.h"

UENUM(BlueprintType)
enum class EMarkerType : uint8 {
    Start,
    End,
    Event,
};

