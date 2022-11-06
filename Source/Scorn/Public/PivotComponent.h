#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ENPCType.h"
#include "ELocationPivot.h"
#include "ELocationUseType.h"
#include "PivotComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UPivotComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELocationPivot PivotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELocationUseType UseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCType NPCType;
    
    UPivotComponent();
};

