#pragma once
#include "CoreMinimal.h"
#include "ECharacterState.generated.h"

UENUM(BlueprintType)
enum class ECharacterState : uint8 {
    Idle,
    Aiming,
    Reloading,
    InInventory,
    WeaponSwitching,
    Healing,
    UsingConsole,
    UsingItem,
    UsingItem_Fail,
    UsingGeneric,
    Paralyzed,
    InWorldEventAnim,
    Resurrected,
    InGloryKill,
    ThrownOnGround,
    Grabbed,
    LockedByParasite,
    UsingConsole_Fail,
    WaitingForParasiteAttack,
    SentryRail,
};

