#include "ScornAudioAmbientSound.h"
#include "FMODAudioComponent.h"

AScornAudioAmbientSound::AScornAudioAmbientSound() {
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AScornAudioAmbientAudioComponent"));
}

