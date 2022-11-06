#pragma once
#include "CoreMinimal.h"
#include "MoviePlayer.h"
#include "LoadingPreMenuScreenDescription.generated.h"

USTRUCT(BlueprintType)
struct SCORNLOADINGSCREEN_API FLoadingPreMenuScreenDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumLoadingScreenDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CompleteOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoviesAreSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MoviePaths;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMoviePlaybackType> PlaybackType;
    
    FLoadingPreMenuScreenDescription();
};

