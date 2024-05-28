#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UsedPlacementActorsContext.UsedPlacementActorsContext_C
// (None)

class UClass* UUsedPlacementActorsContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsedPlacementActorsContext_C");

	return Clss;
}


// UsedPlacementActorsContext_C UsedPlacementActorsContext.Default__UsedPlacementActorsContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUsedPlacementActorsContext_C* UUsedPlacementActorsContext_C::GetDefaultObj()
{
	static class UUsedPlacementActorsContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsedPlacementActorsContext_C*>(UUsedPlacementActorsContext_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UsedPlacementActorsContext.UsedPlacementActorsContext_C.ProvideActorsSet
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm, ZeroConstructor)
// TArray<class AActor*>              CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors(ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)

void UUsedPlacementActorsContext_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class AActor*>& CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors, bool CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsedPlacementActorsContext_C", "ProvideActorsSet");

	Params::UUsedPlacementActorsContext_C_ProvideActorsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors = CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors;
	Parms.CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue = CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);

}

}


