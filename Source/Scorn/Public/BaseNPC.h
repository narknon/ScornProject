#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UObject/NoExportTypes.h"
#include "ESteeringType.h"
#include "UObject/NoExportTypes.h"
#include "DestructibleObject.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EAttackType.h"
#include "ENPCType.h"
#include "HitInfo.h"
#include "EDamageType.h"
#include "EBodypartType.h"
#include "UObject/NoExportTypes.h"
#include "BodyPartHitData.h"
#include "EWeapons.h"
#include "EMovementType.h"
#include "BaseNPC.generated.h"

class ABaseAIController;
class ABaseNPC;
class UPatrolComponent;
class UBaseCharacterSoundManager;
class UNavigationPathProcessor;
class ULocationUseComponent;
class UAIBehaviorComponent;
class UAutopilotComponent;
class UHitReactionComponent;
class ANPC_LocationObject;
class UBehaviorTree;
class AMainCharacterTrigger;
class UBaseNPCAnimInstance;
class UDataTable;
class UActorSwitchTriggerComponent;
class UPaintActorComponent;
class AScornCharacter;
class UCharacterMovementComponent;
class UWorldStateComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseNPC : public ACharacter, public IDestructibleObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNPCTurnedOn, ABaseNPC*, NPC);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNPCTurnedOff, ABaseNPC*, NPC);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseAIController* BaseAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCType NPCType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationPathProcessor* NavigationPathProcessor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepActorOnNavmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocationUseComponent* LocationUseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPatrolComponent* PatrolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIBehaviorComponent* BehaviorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAutopilotComponent* AutopilotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactionComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AlternateQueryExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringRateRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringRateWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringRateAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadiusWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadiusRun;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPC_LocationObject* StartingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScripted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* ScriptBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseNPC* BlockedByNpcBacktrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMainCharacterTrigger*> ScriptTriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScriptTriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimationWarping;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseNPCAnimInstance* BaseNPCAnimBP;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGloryKillEnabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangedAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainBoneName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitInfo HitInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkeletalMapSource;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DismembermentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageMultiplierDataTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavableObjectID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveSystemEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCTurnedOn OnNPCTurnedOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCTurnedOff OnNPCTurnedOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCharacterSwitchedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorSwitchTriggerComponent* NPCSwitchTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SwitchStateDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseCharacterSoundManager* SoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAI;
    
    ABaseNPC();
    UFUNCTION(BlueprintCallable)
    void TriggerScript(AMainCharacterTrigger* Trigger, AScornCharacter* MainCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SwitchCharacterOn();
    
    UFUNCTION(BlueprintCallable)
    void SwitchCharacterOff();
    
    UFUNCTION(BlueprintCallable)
    void StartLiftRide();
    
    UFUNCTION(BlueprintCallable)
    void SimulateHitEvent(EBodypartType BodyPart, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ShouldSpawnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldNPCSwitchAffectThinking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNpcDeadOnLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableCollisionAndMovement(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSpawned(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetVirtualBones();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform ProcessRootMotionPreConvertToWorldEvent(const FTransform& LocalRootMotionTransform, UCharacterMovementComponent* CharacterMovementComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform ProcessRootMotionPostConvertToWorldEvent(const FTransform& WorldSpaceRootMotionTransform, UCharacterMovementComponent* CharacterMovementComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostLoadJsonVars();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostLoadSpawner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectPostLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefaultInit();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsInLocomotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsGloryKillEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtHisDestinationHole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HitReaction(const FBodyPartHitData& HitBodyPartData, EWeapons WeaponType, ACharacter* DamageDealer, float Damage, const EDamageType& DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldStateComponent* GetWorldState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnAngle(FVector TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringRate(ESteeringType SteeringType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPaintActorComponent* GetPaintActorComponent() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    uint8 GetGroupID() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetEyesRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEyesLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCharacterMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackRange(EAttackType AttackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackHalfAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseNPCAnimInstance* GetAnimBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAlternateQueryExtent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorPivotPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceptanceRadius(EMovementType MovementType) const;
    
    UFUNCTION(BlueprintCallable)
    void EndLiftRide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoGloryKill(int32 AnimVariation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoGloryHit(float Damage);
    
    UFUNCTION(BlueprintCallable)
    void DismemberBodyPart(EBodypartType BodyPartType, EDamageType DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ConvertFloorToCharacterLocation(FVector FloorLocation) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEditorTick(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform AnimationWarping(const FTransform CurrentTransform, FTransform DeltaTransform, const FTransform RemainingCorrection, const FVector RemainingAnimTranslation, const FVector RemainingAnimRotation, const float FractionTime) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

