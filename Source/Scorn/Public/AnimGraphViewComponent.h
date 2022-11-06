#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimGraphViewComponent.generated.h"

class UBaseNPCAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UAnimGraphViewComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseNPCAnimInstance* AnimGraph;
    
public:
    UAnimGraphViewComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(UBaseNPCAnimInstance* Graph);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringAlpha() const;
    
};

