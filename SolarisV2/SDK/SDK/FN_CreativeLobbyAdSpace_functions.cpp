#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativeLobbyAdSpace.CreativeLobbyAdSpace_C
// (None)

class UClass* UCreativeLobbyAdSpace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeLobbyAdSpace_C");

	return Clss;
}


// CreativeLobbyAdSpace_C CreativeLobbyAdSpace.Default__CreativeLobbyAdSpace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativeLobbyAdSpace_C* UCreativeLobbyAdSpace_C::GetDefaultObj()
{
	static class UCreativeLobbyAdSpace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeLobbyAdSpace_C*>(UCreativeLobbyAdSpace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeLobbyAdSpace.CreativeLobbyAdSpace_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativeLobbyAdSpace_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeLobbyAdSpace_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeLobbyAdSpace.CreativeLobbyAdSpace_C.ExecuteUbergraph_CreativeLobbyAdSpace
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeLobbyAdSpace_C::ExecuteUbergraph_CreativeLobbyAdSpace(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeLobbyAdSpace_C", "ExecuteUbergraph_CreativeLobbyAdSpace");

	Params::UCreativeLobbyAdSpace_C_ExecuteUbergraph_CreativeLobbyAdSpace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


