#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_BuildingDamaged.Announce_BuildingDamaged_C
// (Actor)

class UClass* AAnnounce_BuildingDamaged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_BuildingDamaged_C");

	return Clss;
}


// Announce_BuildingDamaged_C Announce_BuildingDamaged.Default__Announce_BuildingDamaged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_BuildingDamaged_C* AAnnounce_BuildingDamaged_C::GetDefaultObj()
{
	static class AAnnounce_BuildingDamaged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_BuildingDamaged_C*>(AAnnounce_BuildingDamaged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_BuildingDamaged.Announce_BuildingDamaged_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_BuildingDamaged_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_BuildingDamaged_C", "OnClientAnnouncementStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_BuildingDamaged.Announce_BuildingDamaged_C.ExecuteUbergraph_Announce_BuildingDamaged
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_BuildingDamaged_C::ExecuteUbergraph_Announce_BuildingDamaged(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_BuildingDamaged_C", "ExecuteUbergraph_Announce_BuildingDamaged");

	Params::AAnnounce_BuildingDamaged_C_ExecuteUbergraph_Announce_BuildingDamaged_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


