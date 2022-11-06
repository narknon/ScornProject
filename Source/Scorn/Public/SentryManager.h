#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "SentryManager.generated.h"

class AScornCharacter;

UCLASS(Blueprintable)
class SCORN_API ASentryManager : public ASavableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AScornCharacter*> Characters;
    
public:
    ASentryManager();
};

