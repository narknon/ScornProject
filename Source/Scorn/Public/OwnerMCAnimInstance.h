#pragma once
#include "CoreMinimal.h"
#include "MainCharacterAnimInstance.h"
#include "MainCharacterAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "OwnerMCAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCORN_API UOwnerMCAnimInstance : public UMainCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMainCharacterAnimInstance::FNoParamDelegate OnForceSetCameraRotation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMainCharacterAnimInstance::FNoParamDelegate OnStartAutopilot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObjectInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutopilotOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFocusCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusedCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceFocusTransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementForwardExtraSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementAxesChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothedMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementBlendValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementBlendChangeSpeed;
    
public:
    UOwnerMCAnimInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void StartUseObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartConsoleExit();
    
    UFUNCTION(BlueprintCallable)
    void SetForceFocusCamera(bool InForceFocusCamera, float InForceFocusTransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusedCameraTarget(FVector InFocusedCameraTarget);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_StartAutopilot();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnConsoleUseEnd();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ForceSetCameraRotation();
    
};

