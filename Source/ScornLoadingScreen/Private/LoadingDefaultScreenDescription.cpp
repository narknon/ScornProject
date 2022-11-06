#include "LoadingDefaultScreenDescription.h"

FLoadingDefaultScreenDescription::FLoadingDefaultScreenDescription() {
    this->MinimumLoadingScreenDisplayTime = 0.00f;
    this->CompleteOnLoad = false;
    this->MoviesAreSkippable = false;
    this->UseImage = false;
    this->ImageStretch = EStretch::None;
}

