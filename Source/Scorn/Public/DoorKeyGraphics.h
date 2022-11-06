#pragma once
#include "CoreMinimal.h"
#include "ItemGraphics.h"
#include "EDoorKeyPatterns.h"
#include "DoorKeyGraphics.generated.h"

UCLASS(Blueprintable)
class SCORN_API ADoorKeyGraphics : public AItemGraphics {
    GENERATED_BODY()
public:
    ADoorKeyGraphics();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentKey(EDoorKeyPatterns KeyPattern, bool HasPattern);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize(const EDoorKeyPatterns KeyPattern);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FirstPickup(EDoorKeyPatterns KeyPattern);
    
};

