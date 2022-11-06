#include "ScornDefaultSettingsDataAsset.h"

UScornDefaultSettingsDataAsset::UScornDefaultSettingsDataAsset() {
    this->Language = 0;
    this->bShowGammaCorrection = false;
    this->FrameRateLimit = 0;
    this->HDREnabled = false;
    this->VSyncEnabled = false;
    this->GammaMin = 0.00f;
    this->GammaMax = 0.00f;
    this->Gamma = 0.00f;
    this->MotionBlur = false;
    this->FidelityFX = 0;
    this->SharpnessFX = 0.00f;
    this->WindowMode = EWindowMode::Fullscreen;
    this->bShowSoundOutputDeviceOption = false;
    this->DefaultSoundOutputDevice = EScornSoundOutputDevice::Cinematic;
    this->MasterVolume = 0.00f;
    this->SFXVolume = 0.00f;
    this->MusicVolume = 0.00f;
    this->FovMin = 0.00f;
    this->FovMax = 0.00f;
    this->FovDefault = 0.00f;
    this->SmoothMouse = false;
    this->InvertedMouseX = false;
    this->InvertedMouseY = false;
    this->MouseSensitivityMin = 0.00f;
    this->MouseSensitivityMax = 0.00f;
    this->MouseSensitivity = 0.00f;
    this->EMASmoothingPeriodMin = 0.00f;
    this->EMASmoothingPeriodMax = 0.00f;
    this->EMASmoothingPeriod = 0.00f;
    this->VibrationsEnabled = false;
    this->UIEnabled = false;
    this->ControllerLayout = 0;
}

