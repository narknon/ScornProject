#pragma once
#include "CoreMinimal.h"
#include "MainCharacterInputComponent.h"
#include "TestMainCharacterInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UTestMainCharacterInputComponent : public UMainCharacterInputComponent {
    GENERATED_BODY()
public:
    UTestMainCharacterInputComponent();
    UFUNCTION(BlueprintCallable)
    void UseReleased();
    
    UFUNCTION(BlueprintCallable)
    void UsePressed();
    
    UFUNCTION(BlueprintCallable)
    void UseHealthItemPressed();
    
    UFUNCTION(BlueprintCallable)
    void Turn(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SelectWeapon2();
    
    UFUNCTION(BlueprintCallable)
    void SelectWeapon1();
    
    UFUNCTION(BlueprintCallable)
    void SelectStunGun();
    
    UFUNCTION(BlueprintCallable)
    void RunReleased();
    
    UFUNCTION(BlueprintCallable)
    void RunPressed();
    
    UFUNCTION(BlueprintCallable)
    void ReloadReleased();
    
    UFUNCTION(BlueprintCallable)
    void ReloadPressed();
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void MenuPressed();
    
    UFUNCTION(BlueprintCallable)
    void LookUp(float Value);
    
    UFUNCTION(BlueprintCallable)
    void FireReleased();
    
    UFUNCTION(BlueprintCallable)
    void FirePressed();
    
    UFUNCTION(BlueprintCallable)
    void CancelReleased();
    
    UFUNCTION(BlueprintCallable)
    void CancelPressed();
    
    UFUNCTION(BlueprintCallable)
    void BrowseInventory();
    
    UFUNCTION(BlueprintCallable)
    void ApparatusItemPressed();
    
    UFUNCTION(BlueprintCallable)
    void AimReleased();
    
    UFUNCTION(BlueprintCallable)
    void AimPressed();
    
};

