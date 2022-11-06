#pragma once
#include "CoreMinimal.h"
#include "ELevelSectionSwitcherUseMode.generated.h"

UENUM(BlueprintType)
enum class ELevelSectionSwitcherUseMode : uint8 {
    None,
    SelectionAdd,
    SelectionRemove,
    MapScanAdd,
    MapScanRemove,
    FilterExisting,
};

