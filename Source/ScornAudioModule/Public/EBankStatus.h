#pragma once
#include "CoreMinimal.h"
#include "EBankStatus.generated.h"

UENUM(BlueprintType)
enum class EBankStatus : uint8 {
    Loaded,
    Unloaded,
};

