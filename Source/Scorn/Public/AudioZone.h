#pragma once
#include "CoreMinimal.h"
#include "SpatialCompoundZone.h"
#include "SoundKeysPair.h"
#include "AudioZone.generated.h"

class AActor;
class AAudioZoneTrigger;

UCLASS(Blueprintable)
class SCORN_API AAudioZone : public ASpatialCompoundZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundKeysPair> SoundSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAudioZoneTrigger*> Triggers;
    
    AAudioZone();
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

