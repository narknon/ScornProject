#pragma once
#include "CoreMinimal.h"
#include "ENPCLocationType.generated.h"

UENUM(BlueprintType)
enum class ENPCLocationType : uint8 {
    Default,
    WallTop,
    WallBottom,
    Floor,
    Pod,
    PodEdge,
    PodLayingDown,
    Chain,
    Pile01,
    Pile02,
    Pile03,
    Pipe,
    TrimMachine,
    Custom,
    WheelGateA,
    WheelGateB,
    ThreeWayKeyRoom,
};

