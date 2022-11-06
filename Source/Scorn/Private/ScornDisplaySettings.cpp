#include "ScornDisplaySettings.h"

FScornDisplaySettings::FScornDisplaySettings() {
    this->Gamma = 0.00f;
    this->MotionBlur = false;
    this->FidelityFX = 0;
    this->SharpnessFX = 0.00f;
    this->bUseVSync = false;
    this->bUseDynamicResolution = false;
    this->ResolutionSizeX = 0;
    this->ResolutionSizeY = 0;
    this->LastUserConfirmedResolutionSizeX = 0;
    this->LastUserConfirmedResolutionSizeY = 0;
    this->WindowPosX = 0;
    this->WindowPosY = 0;
    this->FullscreenMode = 0;
    this->LastConfirmedFullscreenMode = 0;
    this->PreferredFullscreenMode = 0;
    this->FrameRateLimit = 0.00f;
    this->DesiredScreenWidth = 0;
    this->bUseDesiredScreenHeight = false;
    this->DesiredScreenHeight = 0;
    this->LastUserConfirmedDesiredScreenWidth = 0;
    this->LastUserConfirmedDesiredScreenHeight = 0;
    this->LastRecommendedScreenWidth = 0.00f;
    this->LastRecommendedScreenHeight = 0.00f;
    this->LastCPUBenchmarkResult = 0.00f;
    this->LastGPUBenchmarkResult = 0.00f;
    this->LastGPUBenchmarkMultiplier = 0.00f;
    this->bUseHDRDisplayOutput = false;
    this->HDRDisplayOutputNits = 0;
}

