#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavigationPoint.generated.h"

class UStaticMeshComponent;
class UArrowComponent;

UCLASS(Blueprintable)
class SCORN_API ANavigationPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    ANavigationPoint();
    UFUNCTION(BlueprintCallable)
    void SetArrowComponent(UArrowComponent* ArrowComponentToSet);
    
};

