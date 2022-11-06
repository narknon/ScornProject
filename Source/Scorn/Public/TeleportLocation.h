#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeleportLocation.generated.h"

class AActorSwitchBaseRegion;
class UFMODBank;
class ALevelStreamingManager;
class AExponentialHeightFogTemplate;
class ASkyLightTemplate;

UCLASS(Blueprintable)
class SCORN_API ATeleportLocation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActorSwitchBaseRegion>> ActorSwitchersToTurnOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ALevelStreamingManager>> StreamingManagersToTurnOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AExponentialHeightFogTemplate> FogTemplateToTurnOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASkyLightTemplate> SkylightTemplateToTurnOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBank*> LoadBanks;
    
    ATeleportLocation();
};

