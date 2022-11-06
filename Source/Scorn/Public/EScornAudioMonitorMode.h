#pragma once
#include "CoreMinimal.h"
#include "EScornAudioMonitorMode.generated.h"

UENUM(BlueprintType)
enum class EScornAudioMonitorMode : uint8 {
    None,
    Zone,
    EventInstances_Playing,
    EventInstances_All,
    AllBusesInfo,
    VCAStatus,
    BusStatus,
    ChannelMetering,
    BanksStatus,
    AllNPC,
    MenuAudioSettings,
    MusicManager,
};

