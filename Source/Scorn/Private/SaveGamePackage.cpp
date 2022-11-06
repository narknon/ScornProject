#include "SaveGamePackage.h"

FSaveGamePackage::FSaveGamePackage() {
    this->bUseWorldSections = false;
    this->CurrentSubLevelIndex = 0;
    this->PlayTime = 0;
    this->SaveSubLevelIndex = 0;
    this->Saved = false;
    this->MCType = EMCType::MC;
}

