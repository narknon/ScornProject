#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ERoomType.h"
#include "RoomTriggerInterface.generated.h"

UINTERFACE(Blueprintable)
class URoomTriggerInterface : public UInterface {
    GENERATED_BODY()
};

class IRoomTriggerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitRoom(ERoomType Room);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterRoom(ERoomType Room);
    
};

