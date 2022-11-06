#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioParameterData.h"
#include "UObject/NoExportTypes.h"
#include "BodyPartHitData.h"
#include "EWeapons.h"
#include "EDamageType.h"
#include "BaseCharacterSoundManager.generated.h"

class UAnimSequenceBase;
class UFMODAudioComponent;
class UBaseObstructionPathPropagination;
class UFMODEvent;
class UObject;
class ACharacter;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UBaseCharacterSoundManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFMODAudioComponent*> CharacterAudioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AnimNotifyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* MainAudioComponentRef_Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseObstructionPathPropagination* ScornSoundPropaginationComponentRef_Debug;
    
    UBaseCharacterSoundManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundManagerEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetOcclusion(FVector Location, float occlusion, float Angle, FName OcclusionParamName, FName PointAngleParamName);
    
    UFUNCTION(BlueprintCallable)
    void SetAreConditionsMet(bool InAreConditionsMet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWalk(float FoleyIntesity, float FootstepInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    void OnSetSoundManagerEnabled(UObject* WorldContextObject, bool NewEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSingleAndReset(const int32 ParameterValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSingle(const int32 ParameterValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFootstepEvent(const float& Velocity, const float& JogSpeed, const float& RunSpeed, const uint8 SurfaceValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetBehaviour(const int32 ParameterValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimNotify(UAnimSequenceBase* inAnimation, const TSoftObjectPtr<UFMODEvent>& Event, const TArray<FAudioParameterData>& ParameterDescriptions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit(ACharacter* CharacterOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitReaction(const FBodyPartHitData& HitBodyPartData, EWeapons WeaponType, ACharacter* DamageDealer, float Damage, const EDamageType& DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameplayDebugging();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFootstep();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isUFMODAudioComponentNotNull(UFMODAudioComponent* comp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSoundManagerEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAreConditionsMet();
    
};

