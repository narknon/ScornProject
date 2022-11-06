#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BodyPart.generated.h"

class UActorSwitchTriggerComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SCORN_API ABodyPart : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorSwitchTriggerComponent* SwitchTrigger;
    
public:
    ABodyPart();
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchOn();
    
    UFUNCTION(BlueprintCallable)
    void SwitchOff();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSwitchedOn(bool bSwitchOn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSourceMesh() const;
    
};

