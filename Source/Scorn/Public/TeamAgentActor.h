#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "TeamAgentActor.generated.h"

UCLASS(Blueprintable)
class SCORN_API ATeamAgentActor : public AActor, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    ATeamAgentActor();
    
    // Fix for true pure virtual functions not being implemented
};

