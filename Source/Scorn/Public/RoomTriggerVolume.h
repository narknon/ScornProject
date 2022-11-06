#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "ERoomType.h"
#include "RoomTriggerVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class SCORN_API ARoomTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomType RoomType;
    
    ARoomTriggerVolume();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

