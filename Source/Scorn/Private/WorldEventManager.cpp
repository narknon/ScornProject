#include "WorldEventManager.h"

class UWorldEventObserver;

void UWorldEventManager::UnregisterObserver(UWorldEventObserver* Observer) {
}

void UWorldEventManager::StopWorldEventByID(const uint8& WorldEventID) {
}

void UWorldEventManager::RegisterObserver(UWorldEventObserver* Observer) {
}

void UWorldEventManager::MakeEventStructure_Implementation() {
}

FString UWorldEventManager::GetWorldEventNameByID_Implementation(const uint8& WorldEventID) const {
    return TEXT("");
}

FString UWorldEventManager::GetTestFileName_Implementation() const {
    return TEXT("");
}

void UWorldEventManager::AddEventToList(const uint8& EventID) {
}

void UWorldEventManager::AddDependency(const uint8& EventID, const uint8& DependencyID, EWorldEventDependencyType DependencyType) {
}

void UWorldEventManager::AddDependencies(const uint8& EventID, const TArray<uint8>& DependencyIDs, EWorldEventDependencyType DependencyType) {
}

UWorldEventManager::UWorldEventManager() {
}

