#include "ScornViewportClient.h"

void UScornViewportClient::SetScornViewportState(const TEnumAsByte<EScornViewportFocusState> State) {
}

void UScornViewportClient::OnWindowFocusChanged(bool bIsFocused) {
}

TEnumAsByte<EScornViewportFocusState> UScornViewportClient::GetScornViewportState() const {
    return Focused;
}

void UScornViewportClient::FadeToBlack(const float Duration) {
}

void UScornViewportClient::FadeFromBlack(const float Duration) {
}

void UScornViewportClient::ConstrainCursor() {
}

UScornViewportClient::UScornViewportClient() {
    this->bBussesPaused = false;
    this->bBussesMuted = false;
}

