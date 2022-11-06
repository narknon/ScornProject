#include "LiquidVFXComponent.h"

class USkeletalMeshComponent;

void ULiquidVFXComponent::SetDripSplatScaleRatio(float Scale) {
}

void ULiquidVFXComponent::DrawSplashes(FVector Location, FVector Direction, FVector Normal) {
}

void ULiquidVFXComponent::DrawPoolBySocket(USkeletalMeshComponent* SkeletalMeshComponent, FName SocketName) {
}

void ULiquidVFXComponent::DrawPoolByLocation(FVector Location, FRotator Rotation) {
}

void ULiquidVFXComponent::DrawDrips(FVector Location, FVector Direction, FVector Normal) {
}

ULiquidVFXComponent::ULiquidVFXComponent() {
    this->FloorAngleThreshold = 0.10f;
    this->BPDrip = NULL;
    this->DripMinScale = 5.00f;
    this->DripMaxScale = 12.00f;
    this->BPSplash = NULL;
    this->AngleTreshold = 20.00f;
    this->DripSplatScaleRatio = 5.00f;
    this->BPPool = NULL;
    this->PoolScale = 70.00f;
}

