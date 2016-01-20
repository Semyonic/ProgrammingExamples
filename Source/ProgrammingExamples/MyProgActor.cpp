//
//  MyProgActor.cpp
//  ProgrammingExamples
//
//  Created by Semih Onay on 20.01.2016.
//  Copyright © 2016 Semih Onay. All rights reserved.
//

#include "ProgrammingExamples.h"
#include "MyProgActor.h"


// Sets default values
AMyProgActor::AMyProgActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyProgActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyProgActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
    
    FVector NewLocation = GetActorLocation();
    float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
    //Scale the vector by 20x
    NewLocation.Z += DeltaHeight*20.0f;
    RunningTime += DeltaTime;
    SetActorLocation(NewLocation);

}

