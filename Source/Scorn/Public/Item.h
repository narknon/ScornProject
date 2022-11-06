#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Item.generated.h"

class AItemGraphics;
class AItemUsePlaceObject;

UCLASS(Abstract, Blueprintable)
class UItem : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemUsageHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemUsageHandle OnItemUsageHandle;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItemGraphics> Graphics;
    
    UPROPERTY(EditAnywhere)
    uint8 MaxInventoryInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItemGraphics* GraphicsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InInventory;
    
public:
    UItem();
    UFUNCTION(BlueprintCallable)
    void Use(AItemUsePlaceObject* UsePlaceObject);
    
    UFUNCTION(BlueprintCallable)
    AItemGraphics* SpawnGraphics(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldBeDiscarded();
    
    UFUNCTION(BlueprintCallable)
    void SetInInventory(bool bIsInInventory, int32 InEntryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreUseInit(AItemUsePlaceObject* UsePlaceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGraphicsSpawn(AItemGraphics* GraphicsObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleItemUseTriggeredInAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AItemGraphics> GetItemGraphicsClass() const;
    
    UFUNCTION(BlueprintCallable)
    AItemGraphics* GetGraphics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Discard();
    
    UFUNCTION(BlueprintCallable)
    void DestroyGraphics();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AreAllRequirementsForUseMet(AItemUsePlaceObject* UsePlaceObject);
    
};

