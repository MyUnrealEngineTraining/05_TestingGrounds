// Fill out your copyright notice in the Description page of Project Settings.


#include "ChooseNextwayPoint.h"



#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UChooseNextwayPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto AIController = OwnerComp.GetAIOwner();
	const auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	const auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	UE_LOG(LogTemp, Warning, TEXT("Waypoint index = %i"), Index)
	
	return EBTNodeResult::Succeeded;
}
