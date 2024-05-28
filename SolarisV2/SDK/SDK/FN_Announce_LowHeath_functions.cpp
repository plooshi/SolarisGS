#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_LowHeath.Announce_LowHeath_C
// (Actor)

class UClass* AAnnounce_LowHeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_LowHeath_C");

	return Clss;
}


// Announce_LowHeath_C Announce_LowHeath.Default__Announce_LowHeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_LowHeath_C* AAnnounce_LowHeath_C::GetDefaultObj()
{
	static class AAnnounce_LowHeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_LowHeath_C*>(AAnnounce_LowHeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_LowHeath.Announce_LowHeath_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_LowHeath_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_LowHeath_C", "OnClientAnnouncementStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_LowHeath.Announce_LowHeath_C.ExecuteUbergraph_Announce_LowHeath
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_LowHeath_C::ExecuteUbergraph_Announce_LowHeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_LowHeath_C", "ExecuteUbergraph_Announce_LowHeath");

	Params::AAnnounce_LowHeath_C_ExecuteUbergraph_Announce_LowHeath_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


