#pragma once
#include "CoreMinimal.h"
#include "EHeatBoxType.generated.h"

UENUM(BlueprintType)
enum class EHeatBoxType : uint8 {
    Character,
    Npc,
    None,
};

