#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMCType.h"
#include "EScornGameStats.h"
#include "SaveGamePackage.generated.h"

USTRUCT(BlueprintType)
struct FSaveGamePackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWorldSections;
    
    UPROPERTY(EditAnywhere)
    uint8 CurrentSubLevelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveSubLevelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersistentLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Saved;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<EScornGameStats>, int32> GameStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMCType MCType;
    
    SCORN_API FSaveGamePackage();
};

