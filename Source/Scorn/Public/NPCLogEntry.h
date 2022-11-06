#pragma once
#include "CoreMinimal.h"
#include "CharacterLogEntry.h"
#include "NPCLogEntry.generated.h"

USTRUCT(BlueprintType)
struct FNPCLogEntry : public FCharacterLogEntry {
    GENERATED_BODY()
public:
    SCORN_API FNPCLogEntry();
};

