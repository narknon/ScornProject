#include "SpatializedSoundDebugger.h"

class UTextRenderComponent;

void ASpatializedSoundDebugger::SetTextRotation(const FVector& ListenerLocation, const FVector& EmiterLocation) {
}

void ASpatializedSoundDebugger::SetText_Top(const FString& InText, const float& InValue) {
}

void ASpatializedSoundDebugger::SetText_Bottom(const FString& InText, const float& InValue) {
}

void ASpatializedSoundDebugger::SetText_4(const FString& InText, const float& InValue) {
}

void ASpatializedSoundDebugger::SetText_3(const FString& InText, const float& InValue) {
}

void ASpatializedSoundDebugger::SetText_2(const FString& InText, const float& InValue) {
}

void ASpatializedSoundDebugger::SetText(UTextRenderComponent* Component, const FString& InText, const float& InValue) {
}

ASpatializedSoundDebugger::ASpatializedSoundDebugger() {
    this->DebugDuration = -1.00f;
    this->Text_Top = NULL;
    this->Text_2 = NULL;
    this->Text_3 = NULL;
    this->Text_4 = NULL;
    this->Text_Bottom = NULL;
    this->TextMaterial = NULL;
    this->DynamicMaterialInst = NULL;
}

