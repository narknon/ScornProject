#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "NPCSpawner.generated.h"

class ABaseNPC;

UCLASS(Blueprintable)
class SCORN_API ANPCSpawner : public ASavableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseNPC* NPC;
    
    ANPCSpawner();
};

