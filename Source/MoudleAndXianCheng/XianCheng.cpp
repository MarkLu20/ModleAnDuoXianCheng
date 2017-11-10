// Fill out your copyright notice in the Description page of Project Settings.

#include "XianCheng.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h" 


// Sets default values for this component's properties
UXianCheng::UXianCheng()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UXianCheng::BeginPlay()
{
	Super::BeginPlay();
	FMapLoader *xc;
	xc = new FMapLoader();
	xc->nameid = 12;
	xc->Runtest(xc);
	FMapLoader *xc2;
	xc2 = new FMapLoader();
	xc2->nameid = 155;
	xc2->Runtest(xc2);
	// ...
	
}


// Called every frame
void UXianCheng::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



