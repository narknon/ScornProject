#pragma once
#include "CoreMinimal.h"
#include "SwitchRegionSettings.h"
#include "GameFramework/Actor.h"
#include "ActorSwitch.generated.h"

class UBillboardComponent;

UCLASS(Blueprintable)
class SCORN_API AActorSwitch : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchRegionSettings> SwitchRegions;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    AActorSwitch();
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchActors(bool Invert);
    
};

