#include "HighlightIcon.h"

void UHighlightIcon::SetHighlightState(const EHighlightState NewState) {
}

void UHighlightIcon::SetEnabled(const bool Enabled) {
}

UHighlightIcon::UHighlightIcon() {
    this->IconMaterialDynamic = NULL;
    this->HighlightState = EHighlightState::Normal;
}

