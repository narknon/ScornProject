#include "FMODSettings.h"

UFMODSettings::UFMODSettings() {
    this->bLoadAllBanks = false;
    this->bLoadAllSampleData = false;
    this->bEnableLiveUpdate = false;
    this->bEnableEditorLiveUpdate = false;
    this->OutputFormat = EFMODSpeakerMode::Surround_5_1;
    this->bVol0Virtual = true;
    this->Vol0VirtualLevel = 0.00f;
    this->SampleRate = 0;
    this->bMatchHardwareSampleRate = true;
    this->RealChannelCount = 64;
    this->TotalChannelCount = 512;
    this->DSPBufferLength = 0;
    this->DSPBufferCount = 0;
    this->FileBufferSize = 2048;
    this->StudioUpdatePeriod = 0;
    this->bLockAllBuses = false;
    this->LiveUpdatePort = 0;
    this->EditorLiveUpdatePort = 9265;
    this->ReloadBanksDelay = 5;
    this->bEnableMemoryTracking = false;
    this->ContentBrowserPrefix = TEXT("/Game/Audio/FMOD/");
    this->MasterBankName = TEXT("Master");
    this->LoggingLevel = LEVEL_NONE;
}

