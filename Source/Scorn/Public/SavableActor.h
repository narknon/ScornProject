#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SavableActor.generated.h"

UCLASS(Abstract, Blueprintable)
class SCORN_API ASavableActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSavingDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavingDelegate OnObjectLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavingDelegate OnObjectInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveStatically;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavableActorID;
    
public:
    ASavableActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreSaveObject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreLoadObject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostSaveObject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostLoadObject();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostLoadLevel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostDefaultInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefaultInit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInitialized() const;
    
};

