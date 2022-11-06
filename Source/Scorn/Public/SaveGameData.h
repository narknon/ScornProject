#pragma once
#include "CoreMinimal.h"
#include "SaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> BinaryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataName;
    
    SCORN_API FSaveGameData();
};

