#include "SettingsInfoData.h"

FSettingsInfoData::FSettingsInfoData() {
    this->Platform = EScornPlatform::Windows;
    this->bWasResolutionChanged = false;
    this->Created = false;
}

