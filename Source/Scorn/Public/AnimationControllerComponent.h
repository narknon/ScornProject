#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationControllerComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UAnimationControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FullBodyOrderMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayeredOrderMapping;
    
    UAnimationControllerComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickAnimBehaviors(float DeltaTime);
    
};

