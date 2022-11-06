#include "WorldEventObserver.h"

void UWorldEventObserver::TriggerWorldEvent(uint8 EventID) {
}

bool UWorldEventObserver::IsWorldEventTriggered(uint8 EventID) {
    return false;
}

FString UWorldEventObserver::GetTriggeredEventName(uint8 EventID) {
    return TEXT("");
}

UWorldEventObserver::UWorldEventObserver() {
}

