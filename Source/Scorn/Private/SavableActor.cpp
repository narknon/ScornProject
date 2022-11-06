#include "SavableActor.h"








bool ASavableActor::GetIsLoaded() const {
    return false;
}

bool ASavableActor::GetIsInitialized() const {
    return false;
}

ASavableActor::ASavableActor() {
    this->bSaveStatically = true;
}

