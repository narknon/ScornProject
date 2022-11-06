#pragma once
#include "CoreMinimal.h"
#include "EWeapons.generated.h"

UENUM(BlueprintType)
enum class EWeapons : uint8 {
    None,
    Melee,
    Handgun,
    Shotgun,
    Chodegun,
    GrenadeLauncher,
};

