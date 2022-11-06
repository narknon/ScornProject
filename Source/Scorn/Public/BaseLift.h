#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "BaseLift.generated.h"

UCLASS(Blueprintable)
class SCORN_API ABaseLift : public ASavableActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLiftMoveEnd);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLiftMoveEnd LiftMoveEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    ABaseLift();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetNumberOfFloors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetCurrentFloor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateLift(int32 ToFloor);
    
};

