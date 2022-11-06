#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenState.generated.h"

UENUM(BlueprintType)
enum ELoadingScreenState {
    Stopped,
    Teleporting,
    WaitingForLevelStreamingFinish,
    WaitingTextureStreamFinish,
};

