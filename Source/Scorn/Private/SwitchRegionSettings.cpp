#include "SwitchRegionSettings.h"

FSwitchRegionSettings::FSwitchRegionSettings() {
    this->RegionToSwitch = NULL;
    this->bSwitchOn = false;
    this->bOverrideSwitchDuration = false;
    this->SwitchDuration = 0.00f;
}

