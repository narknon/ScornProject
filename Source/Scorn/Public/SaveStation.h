#pragma once
#include "CoreMinimal.h"
#include "BaseConsole.h"
#include "SaveGamePackage.h"
#include "UserProfileData.h"
#include "SaveStation.generated.h"

UCLASS(Blueprintable)
class SCORN_API ASaveStation : public ABaseConsole {
    GENERATED_BODY()
public:
    ASaveStation();
    UFUNCTION(BlueprintCallable)
    void GetAllCurrentProfileData(TArray<FString>& OutHardSaveNames, FSaveGamePackage& OutSoftSave, FUserProfileData& OutSaveSlotInfoData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activate();
    
};

