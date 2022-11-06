#pragma once
#include "CoreMinimal.h"
#include "ESpatialObjectType.generated.h"

UENUM(BlueprintType)
enum class ESpatialObjectType : uint8 {
    Base,
    SkyLight,
    Fog,
    DirectionalLight,
};

