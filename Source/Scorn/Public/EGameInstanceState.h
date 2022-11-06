#pragma once
#include "CoreMinimal.h"
#include "EGameInstanceState.generated.h"

UENUM(BlueprintType)
enum EGameInstanceState {
    MainMenu,
    PauseMenu,
    DeathMenu,
    Game,
    GameTravel,
    MainMenuTravel,
    Quit,
    NewGameCinematic,
    SplashScreen,
};

