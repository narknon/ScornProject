#pragma once
#include "CoreMinimal.h"
#include "EStreamingActionType.generated.h"

UENUM(BlueprintType)
enum class EStreamingActionType : uint8 {
    StreamIn,
    StreamOut,
};

