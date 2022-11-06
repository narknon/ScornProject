#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LiquidVFXComponent.generated.h"

class ABaseLiquidDrips;
class ABaseLiquidSplash;
class ABaseLiquidPool;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API ULiquidVFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseLiquidDrips> BPDrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DripMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DripMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseLiquidSplash> BPSplash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DripSplatScaleRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseLiquidPool> BPPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoolScale;
    
public:
    ULiquidVFXComponent();
    UFUNCTION(BlueprintCallable)
    void SetDripSplatScaleRatio(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawSplashes(FVector Location, FVector Direction, FVector Normal);
    
    UFUNCTION(BlueprintCallable)
    void DrawPoolBySocket(USkeletalMeshComponent* SkeletalMeshComponent, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void DrawPoolByLocation(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void DrawDrips(FVector Location, FVector Direction, FVector Normal);
    
};

