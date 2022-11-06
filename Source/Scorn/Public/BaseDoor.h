#pragma once
#include "CoreMinimal.h"
#include "BaseSwitch.h"
#include "DoorStates.h"
#include "BaseDoor.generated.h"

class ABaseDoor;

UCLASS(Blueprintable)
class SCORN_API ABaseDoor : public ABaseSwitch {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDoorStateChange, ABaseDoor*, Door, DoorStates, DoorState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorStateChange OnDoorStateChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    DoorStates CurrentDoorState;
    
public:
    ABaseDoor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleDoorOpen();
    
    UFUNCTION(BlueprintCallable)
    void SetDoorState(const DoorStates NewCurrentDoorState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(bool Broken);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    DoorStates GetDoorState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimateDoorBroken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimateDoorBlocked();
    
};

