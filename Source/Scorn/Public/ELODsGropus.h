#pragma once
#include "CoreMinimal.h"
#include "ELODsGropus.generated.h"

UENUM(BlueprintType)
enum class ELODsGropus : uint8 {
    LevelArchitecture,
    SmallProp,
    LargeProp,
    Deco,
    Vista,
    Foliage,
    HighDetail,
    ScornLevelArchitecture,
    ScornLargeProp,
    ScornSplineMeshes2LODs,
    ScornSplineMeshes3LODs,
};

