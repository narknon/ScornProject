#pragma once
#include "CoreMinimal.h"
#include "BaseConsole.h"
#include "Cart.generated.h"

class ARail;

UCLASS(Blueprintable)
class SCORN_API ACart : public ABaseConsole {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CartRailAlignmentFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float CartDistanceAlongRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Rotated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString CartRailName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARail* CartRail;
    
public:
    ACart();
protected:
    UFUNCTION(BlueprintCallable)
    bool ShouldMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RotateCart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostCartMove();
    
    UFUNCTION(BlueprintCallable)
    void Move();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsRotationAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMovementAllowed();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDirectionSign() const;
    
};

