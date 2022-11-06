#pragma once
#include "CoreMinimal.h"
#include "AchievementsInfoData.generated.h"

USTRUCT(BlueprintType)
struct FAchievementsInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> pendingAchievements;
    
    SCORN_API FAchievementsInfoData();
};

