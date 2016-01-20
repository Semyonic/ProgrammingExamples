//
//  MyProgActor.h
//  ProgrammingExamples
//
//  Created by Semih Onay on 20.01.2016.
//  Copyright © 2016 Semih Onay. All rights reserved.
//

#pragma once

#include "GameFramework/Actor.h"
#include "MyProgActor.generated.h"

UCLASS()
class PROGRAMMINGEXAMPLES_API AMyProgActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyProgActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
    float RunningTime;
};
