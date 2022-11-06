#pragma once
#include "CoreMinimal.h"
#include "BaseUsableObject.h"
#include "EScornConsoleType.h"
#include "EConsoleState.h"
#include "BaseConsole.generated.h"

class UBaseMachineComponent;
class ABaseConsole;

UCLASS(Abstract, Blueprintable)
class SCORN_API ABaseConsole : public ABaseUsableObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUseEvent, ABaseConsole*, Console);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonInput, bool, Pressed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAxisInput, float, InputValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAxisInput ForwardInputDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAxisInput RightInputDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonInput UseButtonDelegate;
    
    UPROPERTY(EditAnywhere)
    uint8 NeededItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseMachineComponent*> MachineComponents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScornConsoleType ConsoleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsoleState ConsoleState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUseEvent OnUseStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUseEvent OnUseEndDelegate;
    
    ABaseConsole();
protected:
    UFUNCTION(BlueprintCallable)
    void StopUsingConsole();
    
    UFUNCTION(BlueprintCallable)
    void StartExitSequence();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldSpawnControlsBar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldForceUnblockSave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserStartAnimEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsoleKeyInserted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInputBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCancelDisabled() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputUseOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputUseOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputRight(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputForward(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputCancel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitMachineComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EScornConsoleType GetConsoleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActiveMachineComponent(UBaseMachineComponent*& ActiveComponent, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ExitAnimStart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteExitSequence();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AutomaticallyShowControlsBar() const;
    
};

