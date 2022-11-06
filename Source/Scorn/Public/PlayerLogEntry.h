#pragma once
#include "CoreMinimal.h"
#include "CharacterLogEntry.h"
#include "PlayerLogEntry.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLogEntry : public FCharacterLogEntry {
    GENERATED_BODY()
public:
    SCORN_API FPlayerLogEntry();
};

