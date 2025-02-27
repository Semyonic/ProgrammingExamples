//
//  MyPawn.h
//  ProgrammingExamples
//
//  Created by Semih Onay on 20.01.2016.
//  Copyright © 2016 Semih Onay. All rights reserved.
//

#pragma once

#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class PROGRAMMINGEXAMPLES_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

    // Added our component in the scene
	UPROPERTY(EditAnywhere)
    UsceneComponent*OurVisibleComponent;
    
    // Input functions
    void Move_XAxis(float AxisValue);
    void Move_YAxis(float AxisValue);
    void StartGrowing();
    void StopGrowing();
    
    // Input variables
    FVector CurrentVelocity;
    bool bGrowing;
	
};
