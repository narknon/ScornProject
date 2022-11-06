#include "AbstractScornGameInstance.h"
#include "Templates/SubclassOf.h"

class UWorld;
class UScornViewportClient;
class UWorldEventManager;
class UScornConsoleCommands;

void UAbstractScornGameInstance::WriteAchievement(FName AchievevementName) {
}

void UAbstractScornGameInstance::StopTravelMoviePlayer() {
}

void UAbstractScornGameInstance::ShowLoadingAndPauseGame() {
}

void UAbstractScornGameInstance::SetUseWorldSections(bool UseWorldSections) {
}

void UAbstractScornGameInstance::SetState(const TEnumAsByte<EGameInstanceState> State) {
}

void UAbstractScornGameInstance::SetNewGamePreset(const TEnumAsByte<EScornNewGamePreset> NewGamePreset) {
}

void UAbstractScornGameInstance::SetMCType(const EMCType NewMCType) {
}

void UAbstractScornGameInstance::SetLoadingScreenState(const TEnumAsByte<ELoadingScreenState>& State) {
}

void UAbstractScornGameInstance::SetGameStatsDictionaryValue(TEnumAsByte<EScornGameStats> Key, int32 Value) {
}

void UAbstractScornGameInstance::SetDebugLoadingScreen(const bool& Enable) {
}

void UAbstractScornGameInstance::SetCurrentSubLevel(const TEnumAsByte<EScornSubLevel> SubLevelName) {
}

void UAbstractScornGameInstance::SetCurrentGameStats(const TMap<TEnumAsByte<EScornGameStats>, int32> GameStats) {
}

void UAbstractScornGameInstance::ResumeGameAndSetGameState() {
}

void UAbstractScornGameInstance::ResetWorldEventManager() {
}

void UAbstractScornGameInstance::ResetGameStats() {
}

void UAbstractScornGameInstance::QueryAchievements() {
}

void UAbstractScornGameInstance::QueryAchievementDescriptions() {
}

void UAbstractScornGameInstance::PlayTravelMovie(const FString& inName) {
}


void UAbstractScornGameInstance::OnScornViewportInitialized_Implementation(UScornViewportClient* InScornViewportClient) {
}

void UAbstractScornGameInstance::OnPreLoadMap(const FString& inMapName) {
}

void UAbstractScornGameInstance::OnPostLoadMap(UWorld* WorldContextObject) {
}


void UAbstractScornGameInstance::OnExternalUIChange(bool Value) {
}

void UAbstractScornGameInstance::OnBeginPlayLevelStreamingDone() {
}

bool UAbstractScornGameInstance::IsEOSSubSystem() {
    return false;
}

void UAbstractScornGameInstance::IncrementGameStatsDictionaryValue(TEnumAsByte<EScornGameStats> Key) {
}

void UAbstractScornGameInstance::HideLoadingAndResumeGame() {
}

void UAbstractScornGameInstance::HandleTextureStreamingEnd(bool AreTexturesLoaded) {
}

void UAbstractScornGameInstance::HandleScreenFadedToBlackEnd(UScornViewportClient* InScornViewportClient, bool IsFading) {
}

void UAbstractScornGameInstance::HandleOnTravelCrossOverEnd() {
}

UWorldEventManager* UAbstractScornGameInstance::GetWorldEventManager() {
    return NULL;
}

float UAbstractScornGameInstance::GetTravelFadeTime() {
    return 0.0f;
}

TEnumAsByte<EGameInstanceState> UAbstractScornGameInstance::GetState() const {
    return MainMenu;
}

UScornViewportClient* UAbstractScornGameInstance::GetScornViewportClient() {
    return NULL;
}

UScornConsoleCommands* UAbstractScornGameInstance::GetScornConsoleCommands() {
    return NULL;
}

EMCType UAbstractScornGameInstance::GetMCType() const {
    return EMCType::MC;
}

FName UAbstractScornGameInstance::GetMainMenuPersistentLevelName() {
    return NAME_None;
}

bool UAbstractScornGameInstance::GetIsDemoBuild() {
    return false;
}

bool UAbstractScornGameInstance::GetGameStatsDictionaryValue(TEnumAsByte<EScornGameStats> Key, int32& Value) {
    return false;
}

FName UAbstractScornGameInstance::GetGamePersistentLevelName() {
    return NAME_None;
}

FString UAbstractScornGameInstance::GetCurrentUserNickname() {
    return TEXT("");
}

TEnumAsByte<EScornSubLevel> UAbstractScornGameInstance::GetCurrentSubLevel() {
    return None;
}

TEnumAsByte<EScornNewGamePreset> UAbstractScornGameInstance::GetCurrentNewGamePreset() {
    return Default;
}

TMap<TEnumAsByte<EScornGameStats>, int32> UAbstractScornGameInstance::GetCurrentGameStats() {
    return TMap<TEnumAsByte<EScornGameStats>, int32>();
}

TSubclassOf<UWorldEventManager> UAbstractScornGameInstance::GetConcreteWorldEventManagerClass() const {
    return NULL;
}

int32 UAbstractScornGameInstance::GetCachedAchievementProgres(const FString& AchievementId) {
    return 0;
}

void UAbstractScornGameInstance::CheckIfUserIsLoggedIn() {
}

UAbstractScornGameInstance::UAbstractScornGameInstance() {
    this->bShowLoading = false;
    this->CanSelectGamePreset = false;
    this->TravelFadeDuration = 0.50f;
    this->IsGamepadEnabled = false;
    this->bUseWorldSections = false;
    this->WorldSectionManagerClass = NULL;
    this->WorldEventManager = NULL;
    this->ConcreteWorldEventManager = NULL;
    this->MCType = EMCType::MC;
}

