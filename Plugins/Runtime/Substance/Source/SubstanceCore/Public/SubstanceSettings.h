#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDefaultSubstanceTextureSize.h"
#include "ESubstanceEngineType.h"
#include "SubstanceSettings.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class SUBSTANCECORE_API USubstanceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MemoryBudgetMb;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CPUCores;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsyncLoadMipClip;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAsyncSubstancesRenderedPerFrame;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ESubstanceEngineType> SubstanceEngine;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EDefaultSubstanceTextureSize> DefaultSubstanceOutputSizeX;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EDefaultSubstanceTextureSize> DefaultSubstanceOutputSizeY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DefaultTemplateMaterial;
    
    USubstanceSettings();
};

