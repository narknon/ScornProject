#include "FMODAudioSource.h"
#include "SavableFMODAudioComponent.h"

class UFMODAudioComponent;

void AFMODAudioSource::HandleOnAudioComponentLoad(float Volume) {
}

UFMODAudioComponent* AFMODAudioSource::GetAudioSourceComponent() {
    return NULL;
}

AFMODAudioSource::AFMODAudioSource() {
    this->AudioComponent = CreateDefaultSubobject<USavableFMODAudioComponent>(TEXT("SoundSource"));
}

