#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "MainCharacterTrigger.generated.h"

class AMainCharacterTrigger;
class AScornCharacter;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class SCORN_API AMainCharacterTrigger : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlapEnd, AMainCharacterTrigger*, Trigger, AScornCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlapBegin, AMainCharacterTrigger*, Trigger, AScornCharacter*, Character);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapBegin OverlapBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapEnd OverlapEndDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Trigger;
    
public:
    AMainCharacterTrigger();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingMainCharacter() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void Disable();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AreTriggerConditionsMet();
    
};

