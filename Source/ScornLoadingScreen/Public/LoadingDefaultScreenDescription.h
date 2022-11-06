#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/SScaleBox.h"
#include "UObject/NoExportTypes.h"
#include "LoadingDefaultScreenDescription.generated.h"

USTRUCT(BlueprintType)
struct SCORNLOADINGSCREEN_API FLoadingDefaultScreenDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumLoadingScreenDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CompleteOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoviesAreSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseImage;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EStretch::Type> ImageStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    FLoadingDefaultScreenDescription();
};

