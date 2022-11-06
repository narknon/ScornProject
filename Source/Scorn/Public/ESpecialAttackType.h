#pragma once
#include "CoreMinimal.h"
#include "ESpecialAttackType.generated.h"

UENUM(BlueprintType)
enum class ESpecialAttackType : uint8 {
    Default,
    WormMelee,
    WormAcid,
    WormProjectile,
    Granade,
    ParasiteAttack_HurtMachine,
    ParasiteAttack_HurtMachine_Tick,
    Krang_Charge,
    Krang_Grab,
    Krang_Melee,
    Krang_EnterEncounter,
    Krang_PhaseCross,
};

