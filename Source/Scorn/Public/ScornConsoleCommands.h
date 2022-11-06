#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ScornConsoleCommands.generated.h"

UCLASS(Blueprintable)
class SCORN_API UScornConsoleCommands : public UObject {
    GENERATED_BODY()
public:
    UScornConsoleCommands();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllConsoleCommands();
    
};

