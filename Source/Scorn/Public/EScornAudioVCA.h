#pragma once
#include "CoreMinimal.h"
#include "EScornAudioVCA.generated.h"

UENUM(BlueprintType)
enum class EScornAudioVCA : uint8 {
    Master,
    SFX,
    Music,
};

