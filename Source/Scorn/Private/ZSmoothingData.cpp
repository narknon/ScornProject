#include "ZSmoothingData.h"

FZSmoothingData::FZSmoothingData() {
    this->MeshZTransformationSmoothingMethod = EZSmoothingMethod::Off;
    this->MeshZTransformationEMAAmount = 0;
    this->MeshZTransformationCompressionThreshold = 0.00f;
    this->MeshZTransformationCompressionMultiplier = 0.00f;
}

