#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "BaseSpatialAnimZone.generated.h"

class AAbstractScornGameMode;

UCLASS(Blueprintable)
class SCORN_API ABaseSpatialAnimZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationPowerParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAbstractScornGameMode* GameMode;
    
public:
    ABaseSpatialAnimZone();
protected:
    UFUNCTION(BlueprintCallable)
    void SetListener(AActor* ListenerToRegister);
    
    UFUNCTION(BlueprintCallable)
    void HandleTriggerBeginOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetListener();
    
};

