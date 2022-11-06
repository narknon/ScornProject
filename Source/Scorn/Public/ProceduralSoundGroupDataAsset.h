#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ProceduralSoundGroupDataAsset.generated.h"

class ABaseProceduralSplineLocation;

UCLASS(Blueprintable)
class SCORN_API UProceduralSoundGroupDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ABaseProceduralSplineLocation>> ProceduralSplineSoundGroup;
    
    UProceduralSoundGroupDataAsset();
};

