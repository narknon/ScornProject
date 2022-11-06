#pragma once
#include "CoreMinimal.h"
#include "FMODAudioComponent.h"
#include "SavableFMODAudioComponent.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnComponentLoad);

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API USavableFMODAudioComponent : public UFMODAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComponentLoad OnComponentLoad;
    
    USavableFMODAudioComponent();
};

