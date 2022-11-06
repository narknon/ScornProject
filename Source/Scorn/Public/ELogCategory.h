#pragma once
#include "CoreMinimal.h"
#include "ELogCategory.generated.h"

UENUM(BlueprintType)
enum class ELogCategory : uint8 {
    Planning,
    Actions,
    Goals,
    Knowledge,
    Sensors,
    Subsystems,
    Log,
    Weapons,
};

