#include "SplineMMShakeSphereComponent.h"

class UCurveFloat;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
class AActor;

void USplineMMShakeSphereComponent::StartToShake(bool ShakeContinuously) {
}

void USplineMMShakeSphereComponent::SetShakeParameters(float Radius, float InDisplacementAmount, float InShakeDuration, TSoftObjectPtr<UCurveFloat> InCurveAsset, UMaterialInstanceDynamic* InMaterialReference, int32 InMaterialMaskID, bool bInShakeOnOverlap, bool bInDrawDebugSphere) {
}

void USplineMMShakeSphereComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

USplineMMShakeSphereComponent::USplineMMShakeSphereComponent() {
    this->DisplacementAmount = 0.00f;
    this->ShakeDuration = 0.00f;
    this->ShakeHardnes = -0.50f;
    this->MatInstDyn = NULL;
    this->MatMaskID = 0;
    this->ShakeOnOverlap = false;
    this->DrawDebugShakeSphere = false;
}

