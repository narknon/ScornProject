#pragma once
#include "CoreMinimal.h"
#include "SubstanceInstanceDesc.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SubstanceFloatInputDesc.h"
#include "UObject/NoExportTypes.h"
#include "SubstanceIntInputDesc.h"
#include "ESubstanceInputType.h"
#include "SubstanceGraphInstance.generated.h"

class UMaterial;
class USubstanceInstanceFactory;
class USubstanceOutputData;
class UTexture2D;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class SUBSTANCECORE_API USubstanceGraphInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubstanceInstanceFactory* ParentFactory;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, UTexture2D*> ImageSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* CreatedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* ConstantCreatedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicCreatedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGuid> OutputTextureLinkData;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, USubstanceOutputData*> OutputInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFrozen;
    
    USubstanceGraphInstance();
    UFUNCTION(BlueprintCallable)
    void SetInputString(const FString& Identifier, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInputInt(const FString& Identifier, const TArray<int32>& InputValues);
    
    UFUNCTION(BlueprintCallable)
    bool SetInputImg(const FString& InputName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInputFloat(const FString& Identifier, const TArray<float>& InputValues);
    
    UFUNCTION(BlueprintCallable)
    void SetInputColor(const FString& Identifier, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void SetInputBool(const FString& Identifier, bool Bool);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetOutputNames();
    
    UFUNCTION(BlueprintCallable)
    FSubstanceIntInputDesc GetIntInputDesc(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    FSubstanceInstanceDesc GetInstanceDesc();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESubstanceInputType> GetInputType(const FString& InputName);
    
    UFUNCTION(BlueprintCallable)
    FString GetInputString(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetInputNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetInputInt(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetInputFloat(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetInputColor(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    bool GetInputBool(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    FSubstanceFloatInputDesc GetFloatInputDesc(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterialInstance(FName Name, UMaterial* InParentMaterial);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceConstant* GetConstantMaterial();
    
    UFUNCTION(BlueprintCallable)
    void EnableOutput(const FString& Identifier, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void CreateOutputs();
    
    UFUNCTION(BlueprintCallable)
    void CreateMaterial(const FString& PackageName, UMaterial* ParentMaterial);
    
};

