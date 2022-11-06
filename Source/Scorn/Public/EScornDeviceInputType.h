#pragma once
#include "CoreMinimal.h"
#include "EScornDeviceInputType.generated.h"

UENUM(BlueprintType)
enum EScornDeviceInputType {
    ScornDeviceInput_Mouse,
    ScornDeviceInput_Keyboard,
    ScornDeviceInput_Gamepad,
    ScornDeviceInput_MAX UMETA(Hidden),
};

