#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StoreSelectionPopup.StoreSelectionPopup_C
// (None)

class UClass* UStoreSelectionPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreSelectionPopup_C");

	return Clss;
}


// StoreSelectionPopup_C StoreSelectionPopup.Default__StoreSelectionPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoreSelectionPopup_C* UStoreSelectionPopup_C::GetDefaultObj()
{
	static class UStoreSelectionPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreSelectionPopup_C*>(UStoreSelectionPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoreSelectionPopup.StoreSelectionPopup_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreSelectionPopup_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectionPopup_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreSelectionPopup_C::ExecuteUbergraph_StoreSelectionPopup(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreSelectionPopup_C", "ExecuteUbergraph_StoreSelectionPopup");

	Params::UStoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


