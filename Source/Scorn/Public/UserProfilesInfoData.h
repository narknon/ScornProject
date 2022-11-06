#pragma once
#include "CoreMinimal.h"
#include "UserProfilesInfoData.generated.h"

USTRUCT(BlueprintType)
struct FUserProfilesInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSlotIndex;
    
    SCORN_API FUserProfilesInfoData();
};

