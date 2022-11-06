#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "SplineNpc.generated.h"

class USplineComponent;
class USkeletalMeshComponent;
class USplineNpcAnimInstance;
class UAnimSequence;

UCLASS(Blueprintable)
class SCORN_API ASplineNpc : public ASavableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplineNpcAnimInstance* SplineNpcAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosedLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
public:
    ASplineNpc();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleDebug();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(bool bInitAnimBlueprint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitialSplineTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEditorTick(float DeltaTime);
    
};

