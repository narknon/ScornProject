#pragma once
#include "CoreMinimal.h"
#include "SaveGameRegionalManager.h"
#include "SavableActorRegionalManager.generated.h"

UCLASS(Blueprintable)
class SCORN_API ASavableActorRegionalManager : public ASaveGameRegionalManager {
    GENERATED_BODY()
public:
    ASavableActorRegionalManager();
};

