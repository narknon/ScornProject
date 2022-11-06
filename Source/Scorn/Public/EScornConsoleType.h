#pragma once
#include "CoreMinimal.h"
#include "EScornConsoleType.generated.h"

UENUM(BlueprintType)
enum class EScornConsoleType : uint8 {
    None,
    Generic,
    KeyMachine,
    Cart,
    MoldmanArmTake,
    MoldmanArmMineConsole,
    MineLockerInterface,
    SaveStation,
    GenericInterface,
    WeaponStorage,
    SelectionInterface,
    RefillStation,
    PowerConsole,
    Moldman,
    BlockingBarsConsole,
    MeleeToolConsole,
    DoubleLever,
    FuseLocker,
    ValveConsole,
    FanMechanism,
    HeartTubeConsole,
    Cocoon,
    ConsoleLever,
    SingleUse,
    TortureMachine,
    JerkConsole,
    HurtConsole,
    JerkRecycler,
    DeadKrang,
    DummyKrang,
};

