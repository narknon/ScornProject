#include "LevelSectionSwitcher.h"

void ALevelSectionSwitcher::ToggleActorsVisibility(bool Hide) {
}

void ALevelSectionSwitcher::SelectionAction(bool AddActors) {
}

void ALevelSectionSwitcher::RemoveInvalidReferences() {
}

void ALevelSectionSwitcher::MapScanAction(bool AddActors) {
}

ALevelSectionSwitcher::ALevelSectionSwitcher() {
    this->bDebugHideSelectedActors = false;
    this->UseMode = ELevelSectionSwitcherUseMode::None;
    this->SwitcherData = NULL;
    this->bUpdateAssetPointers = false;
    this->bPrintAllAssetPointers = false;
}

