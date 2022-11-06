#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    None,
    Normal,
    Blast,
    Stun,
    Melee,
};

