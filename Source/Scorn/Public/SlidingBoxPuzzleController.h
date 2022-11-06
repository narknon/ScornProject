#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavableActor.h"
#include "SlidingBoxPuzzleController.generated.h"

class UStaticMesh;
class AActor;
class UStaticMeshComponent;
class USBPPuzzleData;
class UMeshComponent;

UCLASS(Blueprintable)
class SCORN_API ASlidingBoxPuzzleController : public ASavableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SingleTargetMoldActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* NodeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SingleMold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SingleRemainsMold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> HorizontalDoubleMold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HorizontalDoubleMoldCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* VerticalDoubleMold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* QuadrupleMold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SingleTargetMold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DoubleTargetMold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBPPuzzleData*> DataArray;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint8> SavedArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SavedID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadHeight;
    
public:
    ASlidingBoxPuzzleController();
    UFUNCTION(BlueprintCallable)
    void SplitSecondTarget(UStaticMeshComponent* TargetBottom);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldSpawnTargets();
    
public:
    UFUNCTION(BlueprintCallable)
    void SavePuzzle();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTargetBox();
    
    UFUNCTION(BlueprintCallable)
    void PuzzleInitialize(bool bLoad);
    
    UFUNCTION(BlueprintCallable)
    bool MoveUp();
    
    UFUNCTION(BlueprintCallable)
    bool MoveRight();
    
    UFUNCTION(BlueprintCallable)
    void MoveMoldUp(float InHeightOffset);
    
    UFUNCTION(BlueprintCallable)
    void MoveMoldRight(float InAngleOffset);
    
    UFUNCTION(BlueprintCallable)
    void MoveMoldLeft(float InAngleOffset);
    
    UFUNCTION(BlueprintCallable)
    void MoveMoldDown(float InHeightOffset);
    
    UFUNCTION(BlueprintCallable)
    bool MoveLeft();
    
    UFUNCTION(BlueprintCallable)
    bool MoveDown();
    
    UFUNCTION(BlueprintCallable)
    void LoadPuzzle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadClawPosition();
    
    UFUNCTION(BlueprintCallable)
    bool IsBoxGrababble();
    
    UFUNCTION(BlueprintCallable)
    void GrabBox(bool Grab);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetMarkedMold() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetClawNodeID();
    
    UFUNCTION(BlueprintCallable)
    bool CanMoveUp();
    
    UFUNCTION(BlueprintCallable)
    bool CanMoveRight();
    
    UFUNCTION(BlueprintCallable)
    bool CanMoveLeft();
    
    UFUNCTION(BlueprintCallable)
    bool CanMoveDown();
    
};

