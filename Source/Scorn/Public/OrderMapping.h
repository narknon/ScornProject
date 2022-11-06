#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "OrderMapping.generated.h"

class UAnimBehaviorComponent;
class UAnimGraphViewComponent;

USTRUCT(BlueprintType)
struct FOrderMapping : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimBehaviorComponent> AnimBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimGraphViewComponent> AnimGraphView;
    
    SCORN_API FOrderMapping();
};

