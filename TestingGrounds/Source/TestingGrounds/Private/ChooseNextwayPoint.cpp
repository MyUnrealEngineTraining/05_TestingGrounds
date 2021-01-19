// Fill out your copyright notice in the Description page of Project Settings.


#include "ChooseNextwayPoint.h"


#include "BehaviorTree/BehaviorTreeTypes.h"

EBTNodeResult::Type UChooseNextwayPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Warning, TEXT("Task"))
	return EBTNodeResult::Succeeded;
}
