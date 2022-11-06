#pragma once
#include "CoreMinimal.h"
#include "ELevelStreamingManagerState.generated.h"

UENUM(BlueprintType)
enum class ELevelStreamingManagerState : uint8 {
    Idle_StreamedOut,
    Idle_StreamedIn,
    StreamingAssetsIn,
    StreamingAssetsOut,
    PendingStreamingIn,
    PendingStreamingOut,
    LoadingStreamLevels,
    UnloadingStreamLevels,
    ShowingLevels,
    HidingLevels,
    StreamingPausedExternally,
};

