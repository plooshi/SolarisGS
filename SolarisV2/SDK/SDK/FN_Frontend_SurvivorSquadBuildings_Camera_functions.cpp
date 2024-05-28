#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_SurvivorSquadBuildings_Camera.Frontend_SurvivorSquadBuildings_Camera_C
// (Actor)

class UClass* AFrontend_SurvivorSquadBuildings_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_SurvivorSquadBuildings_Camera_C");

	return Clss;
}


// Frontend_SurvivorSquadBuildings_Camera_C Frontend_SurvivorSquadBuildings_Camera.Default__Frontend_SurvivorSquadBuildings_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_SurvivorSquadBuildings_Camera_C* AFrontend_SurvivorSquadBuildings_Camera_C::GetDefaultObj()
{
	static class AFrontend_SurvivorSquadBuildings_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_SurvivorSquadBuildings_Camera_C*>(AFrontend_SurvivorSquadBuildings_Camera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_SurvivorSquadBuildings_Camera.Frontend_SurvivorSquadBuildings_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_SurvivorSquadBuildings_Camera_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_SurvivorSquadBuildings_Camera_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_SurvivorSquadBuildings_Camera.Frontend_SurvivorSquadBuildings_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_SurvivorSquadBuildings_Camera_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_SurvivorSquadBuildings_Camera_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_SurvivorSquadBuildings_Camera.Frontend_SurvivorSquadBuildings_Camera_C.ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_SurvivorSquadBuildings_Camera_C::ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera(int32 EntryPoint, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_SurvivorSquadBuildings_Camera_C", "ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera");

	Params::AFrontend_SurvivorSquadBuildings_Camera_C_ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


