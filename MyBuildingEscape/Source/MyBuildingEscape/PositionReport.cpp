// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBuildingEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	// ...
	AActor *MyActor;
	MyActor = GetOwner();
	FVector position = MyActor->GetActorLocation();
	FString object_name = GetOwner()->GetName();
	
	UE_LOG(LogTemp, Warning, TEXT("Hello, Bro!!! This is %s! I'm at: (%f, %f, %f)"), *object_name, position.X, position.Y, position.Z);
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

