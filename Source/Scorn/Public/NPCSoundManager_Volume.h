#pragma once
#include "CoreMinimal.h"
#include "LinearAnimState.h"
#include "NPCSoundManager_Volume.generated.h"

class UBaseCharacterSoundManager;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SCORN_API UNPCSoundManager_Volume : public ULinearAnimState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseCharacterSoundManager* BaseCharacterSoundManager;
    
    UNPCSoundManager_Volume();
};

