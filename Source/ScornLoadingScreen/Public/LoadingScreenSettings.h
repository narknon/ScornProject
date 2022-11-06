#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "LoadingScreenGeneralSettings.h"
#include "LoadingDefaultScreenDescription.h"
#include "LoadingPreMenuScreenDescription.h"
#include "LoadingTravelScreenDescription.h"
#include "LoadingMainMenuScreenDescription.h"
#include "LoadingScreenSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SCORNLOADINGSCREEN_API ULoadingScreenSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenGeneralSettings General;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingPreMenuScreenDescription PreMenuMovieScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingDefaultScreenDescription BasicScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingTravelScreenDescription TravelScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingMainMenuScreenDescription MainMenuScreen;
    
    ULoadingScreenSettings();
};

