#pragma once
#include "CoreMinimal.h"
#include "EScornUserSettingsDebugState.generated.h"

UENUM(BlueprintType)
enum EScornUserSettingsDebugState {
    UserSettingsDebug_Disabled,
    UserSettingsDebug_Display,
    UserSettingsDebug_Controller,
    UserSettingsDebug_Input,
    UserSettingsDebug_MAX UMETA(Hidden),
};

