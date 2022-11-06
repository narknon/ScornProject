#pragma once
#include "CoreMinimal.h"
#include "GameplaySavableActor.h"
#include "EHighlightState.h"
#include "UObject/NoExportTypes.h"
#include "EUseFailAnimation.h"
#include "BaseUsableObject.generated.h"

class AScornCharacter;
class UPrimitiveComponent;
class USphereComponent;
class UBillboardComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class SCORN_API ABaseUsableObject : public AGameplaySavableActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnObjectUseEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectEnabled, const bool, Enabled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHighlightStateSet, const EHighlightState, HighlightState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectUseEnd ObjectUseEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHighlightStateSet HighlightStateSetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectEnabled ObjectEnabledDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEnterUseFail;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 WorkModeVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* PlayerSightSensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSnapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScornCharacter* User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasUseFailAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> SightSensorIgnoredComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* CameraTargetStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* CameraTargetEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusCameraOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusCameraOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusCamera;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTargetUpdateCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraFocusReferenceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawDiffLimitOnConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PtichDiffLimitOnConsole;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* UserUseSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* UserEndUseSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndingUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHolsterWeapon;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StartUseAutopilotCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EndUseAutopilotCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAnimRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUserSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUserSpeed;
    
    ABaseUsableObject();
    UFUNCTION(BlueprintCallable)
    void TryEndUse();
    
    UFUNCTION(BlueprintCallable)
    void StartObjectUse(AScornCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SnapUserUseToFloor();
    
    UFUNCTION(BlueprintCallable)
    void SnapUserExitToFloor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOutline(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetForceFocusCamera(bool Focus, FVector FocusLocation, float TransitionDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUseFailSound();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUseStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUseInitiated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUseEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitAnimEnd();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginUseStartAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutopilotStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutopilotEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsUserOnTheLeftSide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndingUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentlyUsableBy(AScornCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitUseIndicator();
    
    UFUNCTION(BlueprintCallable)
    void InitAutopilot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EUseFailAnimation GetUseFailAnimation(AScornCharacter* UserObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UPrimitiveComponent*> GetSightTriggers() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitAnimEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Enable(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    FVector CalculateUseSnapLocation(const FVector& ActorLocation);
    
    UFUNCTION(BlueprintCallable)
    void BeginUseStartAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AreAllRequirementsForUseMet(AScornCharacter* InUser);
    
};

