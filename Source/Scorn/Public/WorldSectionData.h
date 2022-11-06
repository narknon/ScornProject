#pragma once
#include "CoreMinimal.h"
#include "WorldSectionLevelGroup.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "WorldSectionLink.h"
#include "DirectionalLightTemplateProperties.h"
#include "WorldSectionData.generated.h"

class UScornAudioBanksDataAsset;

UCLASS(Blueprintable)
class UWorldSectionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PlayerStartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldSectionLink> LinksToOtherSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldSectionLevelGroup> StreamFirstGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldSectionLevelGroup> StreamSecondGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UScornAudioBanksDataAsset*> AudioBankDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldSectionLevelGroup> StreamNavmeshGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UScornAudioBanksDataAsset*> UnloadAudioBankDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionalLightTemplateProperties PlayerDirectionalProperties;
    
    UWorldSectionData();
};

