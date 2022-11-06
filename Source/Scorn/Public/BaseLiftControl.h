#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseLiftControl.generated.h"

class ABaseLift;

UCLASS(Blueprintable)
class SCORN_API ABaseLiftControl : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnControlUse);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoveEndDelegate, bool, IsUsable);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveEndDelegate OnMoveEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControlUse OnControlUseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Floor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLiftPositionDependency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseLift* Lift;
    
public:
    ABaseLiftControl();
    UFUNCTION(BlueprintCallable)
    void UseControl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveEnd();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LiftMoveEndHandler();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsUsable();
    
};

