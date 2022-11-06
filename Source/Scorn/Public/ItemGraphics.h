#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemGraphics.generated.h"

class AItemUsePlaceObject;

UCLASS(Blueprintable)
class SCORN_API AItemGraphics : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemUseTriggeredInAnim);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemUseTriggeredInAnim ItemUseTriggeredInAnimDelegate;
    
    AItemGraphics();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Use();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInInventory(bool InInventory, int32 EntryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostSpawnOnUsePlace(AItemUsePlaceObject* UsePlaceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeFromWorldStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaveInWorldStart();
    
};

