#pragma once
#include "CoreMinimal.h"
#include "EWeapons.h"
#include "GenericTeamAgentInterface.h"
#include "BaseCharacter.h"
#include "Perception/AISightTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "WeaponData.h"
#include "EHealthState.h"
#include "InventoryEntry.h"
#include "UObject/NoExportTypes.h"
#include "ZSmoothingData.h"
#include "ECharacterState.h"
#include "Engine/EngineTypes.h"
#include "EScornConsoleType.h"
#include "EIUOWorkMode.h"
#include "EItemUseMode.h"
#include "ScornCharacter.generated.h"

class UWorld;
class UWeaponController;
class UMainCharacterInputComponent;
class AScornCharacter;
class UCapsuleComponent;
class AActor;
class UCameraComponent;
class ABaseConsole;
class AItemUsePlaceObject;
class UInventory;
class AWeapon;
class UCrosshairController;
class USceneComponent;
class UScornUserGameSettings;
class UPrimitiveComponent;
class UBaseCharacterSoundManager;
class ABaseUsableObject;
class UFMODEvent;
class UUserWidget;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class AScornCharacter : public ABaseCharacter, public IGenericTeamAgentInterface, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTryUse, AScornCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTryUse TryUseDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCapsuleHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GenericTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AbsoluteMovementVector;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnCharacterDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponController* WeaponController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInInventoryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponData> WeaponDataCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDoingParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeapons CurrentWeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeapons DesiredWeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealthState CurrentHealthState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCameraSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCameraSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EMASmoothingPeriodOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSensitivityOverride;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate GenericInterfaceUseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate ConsoleStartAnimEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsoleStartAnimFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotatingCart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCCapsuleProfileName_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCCapsuleProfileName_WhileUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponReturnToScreenNotNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryEntry ItemsInParasiteHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryEntry ItemsInMCHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParasiteReadyForItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AItemUsePlaceObject*> OverlappedUsableObjects;
    
    UPROPERTY(EditAnywhere)
    uint8 ItemToPrepare;
    
    UPROPERTY(EditAnywhere)
    uint8 UndefinedItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItemUsePlaceObject* ItemUsePlaceObject;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate PostMainCharacterTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainCharacterInputComponent* MCInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrosshairController* CrosshairController;
    
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnForceFocusTurnedOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* PlayerCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCameraFocusCurveWithNoObjectInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawDiffLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawDiffLimitOnConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawDiffLimitWhileParalysed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StationaryCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMatchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVInAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVInResurrectedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepRotationSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedProjectedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedPlayerLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZSmoothingData CurrentZSmoothingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScornUserGameSettings* ScornUserGameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterState CharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowDebugJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnMovingPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlatformPositionDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandgunRecoilAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotgunRecoilAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipPlayerTransformLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseCharacterSoundManager* SoundManager;
    
public:
    AScornCharacter();
protected:
    UFUNCTION(BlueprintCallable)
    void WeaponChangeEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateMouseSensitivityStandardized();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFOV(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float UpdateCurrentPitchUpperLimit(float CurrentPitchLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float UpdateCurrentPitchLowerLimit(float CurrentPitchLimit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCameraRotation();
    
public:
    UFUNCTION(BlueprintCallable)
    void TryUse(ABaseUsableObject* UsableObject, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TrySwitch();
    
    UFUNCTION(BlueprintCallable)
    void TryReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopWormEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWormEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEnableCrosshairAnim(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnWeapon(const EWeapons& Weapon, AWeapon*& OutWeapon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldLimitCameraInWorldEventAnim();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldForwardInputToConsole();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShakeCamera(float Duration, float Intensity, float FadeDuration, UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    void SetZSmoothingDataToDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponReturnToScreenNotNeeded(bool WeaponReturnToScreenNotNeeded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUsingControl(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUseCameraFocusCurveWithNoObjectInUse(bool bUse);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSkipPlayerTransformLoad(bool Skip);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldReturnWeaponToScreen(bool ReturnWeaponToScreen);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPostProcessMaterialWeight(int32 Index, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideVelocity(FVector InVelocity);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMovementSpeedOverride(bool Override, float InMovementSpeedOverrideValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMotionBlurPostEffects(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlurEffectsOverride(bool Flag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLeverPosition(bool Down);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputCancelHoldWeight(const float& Weight);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetForcedCrouching(bool ForceCrouch);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDepthOfFieldPostEffect(float Aperture, float FocalDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetDepthOfFieldOverride(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDepthOfFieldFocalDistanceOverride(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDepthOfFieldApertureOverride(bool Flag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugMCCapsuleHit(bool Debug);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentZSmoothingData(FZSmoothingData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCinematicCameraIdleMod(float IdleMod);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCharacterState(ECharacterState State);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterMovedWeapon(bool WeaponMoved);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCameraOverrideYaw(const float& OverrideYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraOverridePitch(const float& OverridePitch);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraOverride(bool OverrideYaw, bool OverridePitch);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCameraFocusLocation(const FVector& FocusLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBloomPostEffects(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomEffectsOverride(bool Flag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnPreparedItemToInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCinematicCameraIdleMod();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetCameraRotation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveLastPostProcessMaterial();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareItemFromInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBloodSplatScreenVfx();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShotFired();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectWeapon(EWeapons Weapon);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadInputPressed(bool CanReload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReload();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreSave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostLoad();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMobilityChange(bool IsMobile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemUseStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInfiniteElevatorTeleport();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthStateChange(EHealthState NewHealthState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealInputReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealInputPressed(bool CanHeal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceCrouch(bool Forced);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFireStop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefaultInit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCyclePress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsoleUseStart();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsoleUseEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelPress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutopilotStart(bool isStartUse, bool AllowRootMotion);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutopilotEnd(bool isStartUse, bool AllowRootMotion);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAimChange(bool IsAimOn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingConsole() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsReloadAllowed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsReadyToUseObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMovementInputPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputAllowed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsHealingAllowed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterReadyToUseItem(ABaseUsableObject* UsableObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitInventoryAmmo(EWeapons WeaponType, USceneComponent* Parent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasAnyWeapon() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleWeaponAdded(EWeapons Weapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleUseStartAnimEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleUseItemAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleUseEndStart(ABaseConsole* InConsole);
    
    UFUNCTION(BlueprintCallable)
    void HandleUseConsoleAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleObjectUseEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HandleMenuButtonPressed() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleItemUseEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleGenericTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleGenericTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void HandleConsoleUseEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleConsoleKeyInserted();
    
    UFUNCTION(BlueprintCallable)
    void HandleClipLoad(bool IsWeaponFull, bool IsInventoryFull);
    
public:
    UFUNCTION(BlueprintCallable)
    EScornConsoleType GetTypeOfTheConsoleInUse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldReturnWeaponToScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FInventoryEntry GetPreparedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetPlayerCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseUsableObject* GetObjectInUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetMeshRelativeReferenceLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocationProjectedToNavmesh(const FVector QueryExtent, FVector& ProjectedLocation);
    
    UFUNCTION(BlueprintCallable)
    EIUOWorkMode GetItemUsePlaceObjectWorkMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    AItemUsePlaceObject* GetFirstOverlappedItemUsePlaceObject();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeapons GetDesiredWeaponType() const;
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetCurrentWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeapons GetCurrentWeaponType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUserWidget* GetControlsBarWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseConsole* GetConsoleInUse() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    AItemUsePlaceObject* GetClosestOverlappedItemUsePlaceObject();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterOutOfUsableObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterMovedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRotator GetCameraReferenceRotation();
    
protected:
    UFUNCTION(BlueprintCallable)
    FName GetAmmoSocketNameInMCHand(EWeapons Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAmmoInventorySocketName(const int32& Index, EWeapons WeaponType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FName> GetAllVisibleSocketsNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceItemUseEnd();
    
    UFUNCTION(BlueprintCallable)
    void ForceInitialization();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceCameraRotation(const float& InCameraYaw, const float& InCameraPitch);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceCameraFocus(bool Focus, float TransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    void Fire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeToBlack(float FadeDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInFromBlack(float FadeDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    EItemUseMode DetermineItemUseMode(AItemUsePlaceObject* UsePlaceObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CycleWeapons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CycleItems();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConsoleExitAnimPlay();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearAllOverlappedUsableObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckPreparedItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSwitchWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanEnterInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDoWeaponAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraFovUpdate();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 AddPostProcessMaterial(UMaterialInstanceDynamic* Material);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void AddKeyPatternBP(const uint8& KeyPattern);
    
    UFUNCTION(Exec)
    void AddKeyPattern(const uint8& KeyPattern);
    
    
    // Fix for true pure virtual functions not being implemented
};

