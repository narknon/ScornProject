#pragma once
#include "CoreMinimal.h"
#include "EWorldEventDependencyType.h"
#include "UObject/Object.h"
#include "WorldEventManager.generated.h"

class UWorldEventObserver;

UCLASS(Blueprintable)
class UWorldEventManager : public UObject {
    GENERATED_BODY()
public:
    UWorldEventManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterObserver(UWorldEventObserver* Observer);
    
private:
    UFUNCTION()
    void StopWorldEventByID(const uint8& WorldEventID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterObserver(UWorldEventObserver* Observer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakeEventStructure();
    
    UFUNCTION(BlueprintNativeEvent)
    FString GetWorldEventNameByID(const uint8& WorldEventID) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetTestFileName() const;
    
    UFUNCTION(BlueprintCallable)
    void AddEventToList(const uint8& EventID);
    
    UFUNCTION(BlueprintCallable)
    void AddDependency(const uint8& EventID, const uint8& DependencyID, EWorldEventDependencyType DependencyType);
    
    UFUNCTION(BlueprintCallable)
    void AddDependencies(const uint8& EventID, const TArray<uint8>& DependencyIDs, EWorldEventDependencyType DependencyType);
    
};

