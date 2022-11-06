#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EuHeadScriptedManager.generated.h"

class AEuHeadScripted;

UCLASS(Blueprintable)
class SCORN_API AEuHeadScriptedManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEuHeadScripted*> RegisteredHeads;
    
public:
    AEuHeadScriptedManager();
};

