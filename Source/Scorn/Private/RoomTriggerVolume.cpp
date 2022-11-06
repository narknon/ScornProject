#include "RoomTriggerVolume.h"

class AActor;

void ARoomTriggerVolume::HandleOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ARoomTriggerVolume::HandleOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

ARoomTriggerVolume::ARoomTriggerVolume() {
    this->RoomType = ERoomType::MoldRoom;
}

