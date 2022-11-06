#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseConsoleControl.generated.h"

UCLASS(Abstract, Blueprintable)
class SCORN_API ABaseConsoleControl : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeselected);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelected OnSelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeselected OnDeselectedDelegate;
    
    ABaseConsoleControl();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputUseOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputUseOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputRight(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputForward(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Enable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Disable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deselect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activate();
    
};

