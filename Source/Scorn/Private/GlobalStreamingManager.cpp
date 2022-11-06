#include "GlobalStreamingManager.h"

class AActorSwitchBaseRegion;
class ALevelStreamingManager;

void AGlobalStreamingManager::PrepareForLevelStreamingInit() {
}

void AGlobalStreamingManager::OnActorSwitchRegionFinishedSwitching(AActorSwitchBaseRegion* Region) {
}

void AGlobalStreamingManager::HandleStreamingManagerStateChange(ALevelStreamingManager* Manager, const ELevelStreamingManagerState& PreviousState, const ELevelStreamingManagerState& NextState) {
}

AGlobalStreamingManager::AGlobalStreamingManager() {
}

