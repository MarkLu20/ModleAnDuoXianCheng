// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h" 
#include "XianCheng.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MOUDLEANDXIANCHENG_API UXianCheng : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UXianCheng();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//FRunnableThread *xc1;
		//template <typename TchaceNode>
	class  FMapLoader :FRunnable
	{


	public:
		FRunnableThread *xc1;

		int nameid;


		~FMapLoader()
		{
			xc1->WaitForCompletion();
			delete xc1;
			UE_LOG(LogTemp, Warning, TEXT("Delete"));
			xc1 = NULL;
		}
		virtual bool Init() override
		{
			UE_LOG(LogTemp, Warning, TEXT("%d"), nameid);
		
			return true;
		}
		virtual uint32 Run() override {

			UE_LOG(LogTemp, Warning, TEXT("thread %d Run:1"), nameid);
			UE_LOG(LogTemp, Warning, TEXT("thread %d Run:2"), nameid);
			UE_LOG(LogTemp, Warning, TEXT("thread %d Run:3"), nameid);
			//_sleep(10.0f);
			for (int i = 0; i < 10; i++)
			{
				UE_LOG(LogTemp, Warning, TEXT("Exsit"), nameid);
			}
			return 0;


		}

		virtual void  Exit() override
		{

			UE_LOG(LogTemp, Warning, TEXT("thread %d Exit"), nameid);
		}


		bool  FMapLoader::Runtest(FMapLoader *xc)
		{


			xc1 = FRunnableThread::Create(xc, TEXT("NAME01"));
			//FRunnableThread::Create(xc2,TEXT("NAME02"));
			//xc1->WaitForCompletion();
			//delete xc1;
			//xc1 = NULL;
			xc->~FMapLoader();

			return true;
		}
	};

};
