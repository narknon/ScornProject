#pragma once
#include "CoreMinimal.h"
#include "LogComment.generated.h"

USTRUCT(BlueprintType)
struct FLogComment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogSampleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CommentText;
    
    SCORN_API FLogComment();
};

