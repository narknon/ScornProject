#include "SubstanceSettings.h"

USubstanceSettings::USubstanceSettings() {
    this->MemoryBudgetMb = 2048;
    this->CPUCores = 32;
    this->AsyncLoadMipClip = 3;
    this->MaxAsyncSubstancesRenderedPerFrame = 10;
    this->SubstanceEngine = SET_GPU;
    this->DefaultSubstanceOutputSizeX = Size_1024;
    this->DefaultSubstanceOutputSizeY = Size_1024;
}

