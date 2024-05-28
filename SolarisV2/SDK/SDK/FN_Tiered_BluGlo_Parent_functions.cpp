#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tiered_BluGlo_Parent.Tiered_BluGlo_Parent_C
// (Actor)

class UClass* ATiered_BluGlo_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tiered_BluGlo_Parent_C");

	return Clss;
}


// Tiered_BluGlo_Parent_C Tiered_BluGlo_Parent.Default__Tiered_BluGlo_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATiered_BluGlo_Parent_C* ATiered_BluGlo_Parent_C::GetDefaultObj()
{
	static class ATiered_BluGlo_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATiered_BluGlo_Parent_C*>(ATiered_BluGlo_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tiered_BluGlo_Parent.Tiered_BluGlo_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATiered_BluGlo_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tiered_BluGlo_Parent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tiered_BluGlo_Parent.Tiered_BluGlo_Parent_C.ExecuteUbergraph_Tiered_BluGlo_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATiered_BluGlo_Parent_C::ExecuteUbergraph_Tiered_BluGlo_Parent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tiered_BluGlo_Parent_C", "ExecuteUbergraph_Tiered_BluGlo_Parent");

	Params::ATiered_BluGlo_Parent_C_ExecuteUbergraph_Tiered_BluGlo_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


