#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SquadMarker.SquadMarker_C
// (None)

class UClass* USquadMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SquadMarker_C");

	return Clss;
}


// SquadMarker_C SquadMarker.Default__SquadMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USquadMarker_C* USquadMarker_C::GetDefaultObj()
{
	static class USquadMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USquadMarker_C*>(USquadMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SquadMarker.SquadMarker_C.ExecuteUbergraph_SquadMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMarker_C::ExecuteUbergraph_SquadMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SquadMarker_C", "ExecuteUbergraph_SquadMarker");

	Params::USquadMarker_C_ExecuteUbergraph_SquadMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


