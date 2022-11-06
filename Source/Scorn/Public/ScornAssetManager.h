#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "ScornAssetManager.generated.h"

UCLASS(Blueprintable)
class SCORN_API UScornAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UScornAssetManager();
};

