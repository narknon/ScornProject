#include "BaseMusicMananger.h"
#include "SavableFMODAudioComponent.h"

class UMusicManagerDataAsset;

void ABaseMusicMananger::SetSegment(UMusicManagerDataAsset* SegmentDataAsset) {
}


void ABaseMusicMananger::SetDebug(const bool& inDebug) {
}

void ABaseMusicMananger::SetCombatState(TEnumAsByte<EMusicManagerCombatState> InState) {
}






FName ABaseMusicMananger::GetStateParameterName() const {
    return NAME_None;
}

float ABaseMusicMananger::GetState() const {
    return 0.0f;
}

void ABaseMusicMananger::GetSegment(UMusicManagerDataAsset*& currentSegment, bool& IsValid) {
}

TEnumAsByte<EMusicManagerCombatState> ABaseMusicMananger::GetCombatState() const {
    return Idle;
}

FName ABaseMusicMananger::GetCombatParameterName() const {
    return NAME_None;
}

FString ABaseMusicMananger::GetCombatExitMarkerName() const {
    return TEXT("");
}

USavableFMODAudioComponent* ABaseMusicMananger::GetAudioComponent() const {
    return NULL;
}

ABaseMusicMananger::ABaseMusicMananger() {
    this->CurrentSegmentDataAsset = NULL;
    this->AudioComponent = CreateDefaultSubobject<USavableFMODAudioComponent>(TEXT("Theme music audio component"));
    this->Debug = false;
    this->TimelinePosition = 0;
    this->SegmentState = 0.00f;
}

