#include "PortalSystemManager.h"

class UPortalSystemOccluderComponent;
class APortalSystemZone;
class AActor;
class ULightComponent;
class UObject;
class APortalSystemManager;

void APortalSystemManager::RegisterOccluder(UPortalSystemOccluderComponent* occluder) {
}

void APortalSystemManager::RebuildPortalSystemData(bool fromBeginPlay) {
}

void APortalSystemManager::OnZonesVisibilityChanged_Implementation(const TArray<APortalSystemZone*>& zonesNewlyEnabled, const TArray<APortalSystemZone*>& zonesNewlyDisabled) {
}

void APortalSystemManager::NotifyLightMoved(ULightComponent* LightComponent) {
}

APortalSystemManager* APortalSystemManager::GetPortalSystemManagerInstance(UObject* WorldContextObject) {
    return NULL;
}

void APortalSystemManager::ForceUpdatePortalSystem() {
}

void APortalSystemManager::AddLightFromActor(AActor* Actor) {
}

void APortalSystemManager::AddLight(ULightComponent* LightComponent) {
}

APortalSystemManager::APortalSystemManager() {
    this->_occluderInitHasStarted = false;
    this->ShowDebugLines = false;
    this->EnableOptimisation = true;
    this->EnableOptimisationInEditor = false;
    this->ManualRebuildOnly = false;
    this->UpdateForAllViewLocations = false;
    this->LogWarningsOnRebuild = true;
    this->LogVerboseWarnings = true;
    this->LogGlobalInfosOfInternalState = true;
    this->LogVerboseInfosOfInternalState = false;
}

