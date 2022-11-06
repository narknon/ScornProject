#include "WalkableSurfacesTester.h"

void AWalkableSurfacesTester::StopSearch() {
}

void AWalkableSurfacesTester::StartSearch(FVector Start) {
}

void AWalkableSurfacesTester::SaveSearchResult() {
}

void AWalkableSurfacesTester::LoadSearchResult() {
}

void AWalkableSurfacesTester::HitWhileSearching(FVector HitLocation, FVector ImapctPoint, FVector ImpactNormal, int32 CallID, HitType Type) {
}

TArray<FStructPoint> AWalkableSurfacesTester::GetUncheckedPoints() const {
    return TArray<FStructPoint>();
}

TArray<FStructPoint> AWalkableSurfacesTester::GetEdgesFromUncheckedPoint(int32 Index) const {
    return TArray<FStructPoint>();
}

TArray<FStructPoint> AWalkableSurfacesTester::GetEdgesFromCollisionPoint(int32 Index) const {
    return TArray<FStructPoint>();
}

TArray<FStructPoint> AWalkableSurfacesTester::GetEdgesFromCheckedPoint(int32 Index) const {
    return TArray<FStructPoint>();
}

FStructPoint AWalkableSurfacesTester::GetCurentOriginPoint() const {
    return FStructPoint{};
}

TArray<FStructPoint> AWalkableSurfacesTester::GetCollisionPoints() const {
    return TArray<FStructPoint>();
}

TArray<FStructPoint> AWalkableSurfacesTester::GetCheckedPoints() const {
    return TArray<FStructPoint>();
}

void AWalkableSurfacesTester::FinishedSearching(FVector EndLocation) {
}

void AWalkableSurfacesTester::DrawDebugLinesPointsForHitResultArray() {
}

void AWalkableSurfacesTester::DrawDebugForAllFStructPoints() {
}

void AWalkableSurfacesTester::ContinueSearch() {
}

void AWalkableSurfacesTester::CleanBorderPoints() {
}

AWalkableSurfacesTester::AWalkableSurfacesTester() {
    this->SweepStep = 1.00f;
    this->SweepDistance = 0.00f;
    this->StopSearching = false;
    this->ShowClearPoints = false;
    this->EnabelDrawDebug = true;
    this->EnabelDrawDebugHitResult = true;
}

