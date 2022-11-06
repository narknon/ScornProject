#include "ScornAudioModuleDebugger.h"

FScornAudioModuleDebugger::FScornAudioModuleDebugger() {
    this->bEnableFMODDebugging = false;
    this->bEnableEventTraceLogging = false;
    this->BankDebuggerWidget = NULL;
    this->EventInstancePlayingDebuggerWidget = NULL;
    this->VCAStatusWidget = NULL;
    this->BusStatusWidget = NULL;
    this->ZoneStatusWidget = NULL;
    this->MusicManagerStatusWidget = NULL;
    this->AllNPCStatusWidget = NULL;
    this->AudioMenuSettings = NULL;
    this->AudioMonitorDebuggerDataAsset = NULL;
}

