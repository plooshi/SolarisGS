#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C
// (Actor)

class UClass* AGCN_Athena_LowGravity_ZipLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Athena_LowGravity_ZipLine_C");

	return Clss;
}


// GCN_Athena_LowGravity_ZipLine_C GCN_Athena_LowGravity_ZipLine.Default__GCN_Athena_LowGravity_ZipLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Athena_LowGravity_ZipLine_C* AGCN_Athena_LowGravity_ZipLine_C::GetDefaultObj()
{
	static class AGCN_Athena_LowGravity_ZipLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Athena_LowGravity_ZipLine_C*>(AGCN_Athena_LowGravity_ZipLine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_LowGravity_ZipLine_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Athena_LowGravity_ZipLine_C", "ReceiveTick");

	Params::AGCN_Athena_LowGravity_ZipLine_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C.ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_LowGravity_ZipLine_C::ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Athena_LowGravity_ZipLine_C", "ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine");

	Params::AGCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


