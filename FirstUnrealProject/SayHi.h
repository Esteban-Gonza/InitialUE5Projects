// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SayHi.generated.h"

UCLASS()
class FIRSTUNREALPROJECT_API ASayHi : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASayHi();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
