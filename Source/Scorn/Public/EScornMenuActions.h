#pragma once
#include "CoreMinimal.h"
#include "EScornMenuActions.generated.h"

UENUM(BlueprintType)
enum EScornMenuActions {
    ScornMenuActions_None,
    ScornMenuActions_StepBack,
    ScornMenuActions_Navigation_Up,
    ScornMenuActions_Navigation_Down,
    ScornMenuActions_Navigation_Left,
    ScornMenuActions_Navigation_Right,
    ScornMenuActions_Navigation_HID_Horizontal_Axis,
    ScornMenuActions_Navigation_HID_Vertical_Axis,
    ScornMenuActions_TabPrevious,
    ScornMenuActions_TabNext,
    ScornMenuActions_Press,
    ScornMenuActions_Delete,
    ScornMenuActions_Reset_Single,
    ScornMenuActions_Reset_All,
    ScornMenuActions_Confirm,
    ScornMenuActions_MenuToogle,
    ScornMenuActions_MAX UMETA(Hidden),
};

