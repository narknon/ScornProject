#include "WorldSectionManager.h"

class ULevelStreaming;

bool AWorldSectionManager::AreAllLevelsUnloaded() const {
    return false;
}

bool AWorldSectionManager::AreAllLevelsLoadedAndVisible(TArray<ULevelStreaming*> StreamingLevels) const {
    return false;
}

AWorldSectionManager::AWorldSectionManager() {
}

