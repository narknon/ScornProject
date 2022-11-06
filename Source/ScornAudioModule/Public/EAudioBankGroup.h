#pragma once
#include "CoreMinimal.h"
#include "EAudioBankGroup.generated.h"

UENUM(BlueprintType)
enum EAudioBankGroup {
    Player,
    Ambiance,
    NPC,
    Music,
    SFX,
    Master,
};

