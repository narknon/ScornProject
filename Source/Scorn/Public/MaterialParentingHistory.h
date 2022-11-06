#pragma once
#include "CoreMinimal.h"
#include "StructMaterialParameterData.h"
#include "Engine/DataAsset.h"
#include "MaterialParentingHistory.generated.h"

UCLASS(Blueprintable)
class SCORN_API UMaterialParentingHistory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructMaterialParameterData> MaterialsData;
    
    UMaterialParentingHistory();
};

