#pragma once
#include "CoreMinimal.h"
#include "EScornGamepadType.h"
#include "EScornDeviceInputType.h"
#include "ScornDeviceInputTypeIDTable.generated.h"

USTRUCT(BlueprintType)
struct FScornDeviceInputTypeIDTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EScornGamepadType> ScornGamepadType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VendorID;
    
    SCORN_API FScornDeviceInputTypeIDTable();
};

