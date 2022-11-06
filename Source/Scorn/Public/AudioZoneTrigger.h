#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AudioZoneTrigger.generated.h"

class AAudioZoneTrigger;
class AActor;
class AAudioZone;

UCLASS(Blueprintable)
class SCORN_API AAudioZoneTrigger : public AVolume {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlapEnd, AAudioZoneTrigger*, Trigger, AActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlapBegin, AAudioZoneTrigger*, Trigger, AActor*, Actor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapBegin OverlapBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapEnd OverlapEndDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAudioZone* ParentZone;
    
public:
    AAudioZoneTrigger();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOverlapEnd(AActor* Trigger, AActor* OverlappedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleOverlapBegin(AActor* Trigger, AActor* OverlappedActor);
    
};

