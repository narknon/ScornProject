#pragma once
#include "CoreMinimal.h"
#include "BaseUsableObject.h"
#include "EIUOWorkMode.h"
#include "Engine/EngineTypes.h"
#include "ItemUsePlaceObject.generated.h"

class AActor;
class USphereComponent;
class UItem;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class SCORN_API AItemUsePlaceObject : public ABaseUsableObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetItemEvent, bool, Initialization);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEvent ItemTakenDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetItemEvent ItemPlacedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEvent ItemUsedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedHeightDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* ContainedItem;
    
    UPROPERTY(EditAnywhere)
    uint8 ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIUOWorkMode WorkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MainCharacterItemPullOutTrigger;
    
public:
    AItemUsePlaceObject();
    UFUNCTION(BlueprintCallable)
    void TriggerItemUsage();
    
    UFUNCTION(BlueprintCallable)
    UItem* TakeContainedItem();
    
    UFUNCTION(BlueprintCallable)
    void SetItem(UItem* Item, bool Initialization);
    
    UFUNCTION(BlueprintCallable)
    void SetHasItem(bool NewHasItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemUsage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemTaken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItem() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePullOutTriggerOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandlePullOutTriggerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void CreateContainingItem(bool Initialization);
    
};

