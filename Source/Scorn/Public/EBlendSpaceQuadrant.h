#pragma once
#include "CoreMinimal.h"
#include "EBlendSpaceQuadrant.generated.h"

UENUM(BlueprintType)
enum class EBlendSpaceQuadrant : uint8 {
    Front,
    Back_Left,
    Back_Right,
};

