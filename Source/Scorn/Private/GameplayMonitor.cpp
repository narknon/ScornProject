#include "GameplayMonitor.h"

void AGameplayMonitor::SetMarker(const FString& MarkerName, EMarkerType MarkerType) {
}

void AGameplayMonitor::SetCurrentDrawIndex(int32 NewIndex) {
}

void AGameplayMonitor::SetComment(FText CommentText) {
}

void AGameplayMonitor::SelectLogFile() {
}



void AGameplayMonitor::IncrementScale() {
}

FText AGameplayMonitor::GetTimeForEntry(int32 Index) {
    return FText::GetEmpty();
}

float AGameplayMonitor::GetEntryTotalTimeRatio(int32 Index) {
    return 0.0f;
}

TArray<FLogComment> AGameplayMonitor::GetComments() {
    return TArray<FLogComment>();
}

void AGameplayMonitor::GenerateHeatBoxes() {
}

void AGameplayMonitor::EditComment(int32 Index, FText NewText) {
}

void AGameplayMonitor::DeleteComment(int32 Index) {
}

void AGameplayMonitor::DecrementScale() {
}

AGameplayMonitor::AGameplayMonitor() {
    this->bShouldDrawNpc = false;
    this->HeatBoxScale = 1;
    this->ColorModifier = 1;
    this->SelectedLog = TEXT("-");
    this->HeatBoxSize = 0;
    this->DefaultHeatBoxSize = 100;
    this->RenderTarget = NULL;
    this->SceneCaptureHeightOffset = 100.00f;
    this->WorkMode = EGameplayMonitorMode::Log;
    this->LogRate = 0.50f;
    this->AutosaveInterval = 0;
    this->DrawMode = EDrawMode::AllEntries;
    this->PlaySingleDrawRate = 0.10f;
    this->PlayLogHistory = true;
    this->Loop = true;
    this->CurrentDrawIndex = 0;
    this->LogIndex = 0;
    this->bRemoveOverlaps = true;
    this->bShowText = true;
    this->TextScale = 1.00f;
}

