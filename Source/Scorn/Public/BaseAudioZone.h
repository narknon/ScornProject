#pragma once
#include "CoreMinimal.h"
#include "SpatialCompoundZone.h"
#include "SourceKeysPair.h"
#include "BaseAudioZone.generated.h"

class AActor;
class ASoundPropertiesAnimationKey;
class ASpatialCompoundZoneTrigger;

UCLASS(Abstract, Blueprintable)
class SCORN_API ABaseAudioZone : public ASpatialCompoundZone {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpatialization, ASoundPropertiesAnimationKey*, Key, float, Weight);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSourceKeysPair> Sources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpatialCompoundZoneTrigger*> Triggers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpatialization OnSoundSpatialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpatialCompoundZoneTrigger*> OverlappedTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugTriggers;
    
public:
    ABaseAudioZone();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndOverlap(AActor* Trigger, AActor* OverlappedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginOverlap(AActor* Trigger, AActor* OverlappedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOverlapEnd(AActor* Trigger, AActor* OverlappedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleOverlapBegin(AActor* Trigger, AActor* OverlappedActor);
    
};

