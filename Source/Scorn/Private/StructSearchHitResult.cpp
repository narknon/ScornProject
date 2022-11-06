#include "StructSearchHitResult.h"

FStructSearchHitResult::FStructSearchHitResult() {
    this->Status = SearchStatus::Status_NewPoint;
    this->Type = HitType::Block;
}

