#pragma once
#include "CoreMinimal.h"
#include "SaveGameRegionalManager.h"
#include "NPCRegionalManager.generated.h"

UCLASS(Blueprintable)
class SCORN_API ANPCRegionalManager : public ASaveGameRegionalManager {
    GENERATED_BODY()
public:
    ANPCRegionalManager();
};

