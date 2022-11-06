#include "ScornAudioLineTraceDebug.h"

FScornAudioLineTraceDebug::FScornAudioLineTraceDebug() {
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DebugTrace = TraceTypeQuery1;
    this->bTraceComplex = false;
    this->bIgnoreSelf = false;
    this->DrawTime = 0.00f;
}

