#include "BaseScornAudioAmbientSound.h"
#include "FMODAudioComponent.h"

ABaseScornAudioAmbientSound::ABaseScornAudioAmbientSound() {
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AScornAudioAmbientAudioComponent"));
}

