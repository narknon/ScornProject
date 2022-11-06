#include "BloodFlowComponent.h"

UBloodFlowComponent::UBloodFlowComponent() {
    this->DrippingBloodScaleMin = 0.00f;
    this->DrippingBloodScaleMax = 0.00f;
    this->FlowingBloodScaleMin = 0.00f;
    this->FlowingBloodScaleMax = 0.00f;
    this->AngleTreshold = 0.00f;
    this->BloodDripMinScale = 0.00f;
    this->BloodDripMaxScale = 0.00f;
    this->BloodFlowMinScale = 0.00f;
    this->BloodFlowMaxScale = 0.00f;
    this->DripeToSplatScaleRatio = 0.00f;
}

