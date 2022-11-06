#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "EDoorKeyPatterns.h"
#include "DoorKeyItem.generated.h"

UCLASS(Blueprintable)
class SCORN_API UDoorKeyItem : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorKeyPatterns ContainedPattern;
    
public:
    UDoorKeyItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPattern(EDoorKeyPatterns Pattern);
    
};

