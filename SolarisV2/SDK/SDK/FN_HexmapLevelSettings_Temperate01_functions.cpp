#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C
// (Actor)

class UClass* AHexmapLevelSettings_Temperate01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HexmapLevelSettings_Temperate01_C");

	return Clss;
}


// HexmapLevelSettings_Temperate01_C HexmapLevelSettings_Temperate01.Default__HexmapLevelSettings_Temperate01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHexmapLevelSettings_Temperate01_C* AHexmapLevelSettings_Temperate01_C::GetDefaultObj()
{
	static class AHexmapLevelSettings_Temperate01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHexmapLevelSettings_Temperate01_C*>(AHexmapLevelSettings_Temperate01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHexmapLevelSettings_Temperate01_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.CustomSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexmapLevelSettings_Temperate01_C::CustomSettings(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "CustomSettings");

	Params::AHexmapLevelSettings_Temperate01_C_CustomSettings_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.ExecuteUbergraph_HexmapLevelSettings_Temperate01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visibility                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexmapLevelSettings_Temperate01_C::ExecuteUbergraph_HexmapLevelSettings_Temperate01(int32 EntryPoint, bool K2Node_CustomEvent_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "ExecuteUbergraph_HexmapLevelSettings_Temperate01");

	Params::AHexmapLevelSettings_Temperate01_C_ExecuteUbergraph_HexmapLevelSettings_Temperate01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Visibility = K2Node_CustomEvent_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}

}


