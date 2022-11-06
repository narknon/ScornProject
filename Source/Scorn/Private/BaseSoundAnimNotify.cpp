#include "BaseSoundAnimNotify.h"

UBaseSoundAnimNotify::UBaseSoundAnimNotify() {
    this->bHasParameters = false;
    this->AutoPlayInGame = false;
    this->AutoPlayInPreview = false;
    this->Event = NULL;
}

