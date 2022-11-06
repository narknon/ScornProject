#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugInputData.h"
#include "MainCharacterInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UMainCharacterInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimButtonPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelButtonPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelButtonReleaseAnimSpeed;
    
    UMainCharacterInputComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDebugInputData GetDebugInputData();
    
};

