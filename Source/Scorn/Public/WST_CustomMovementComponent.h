#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WST_CustomMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UWST_CustomMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UWST_CustomMovementComponent();
};

