#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PCB_InfoPanel.PCB_InfoPanel_C
// (None)

class UClass* UPCB_InfoPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCB_InfoPanel_C");

	return Clss;
}


// PCB_InfoPanel_C PCB_InfoPanel.Default__PCB_InfoPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPCB_InfoPanel_C* UPCB_InfoPanel_C::GetDefaultObj()
{
	static class UPCB_InfoPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCB_InfoPanel_C*>(UPCB_InfoPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PCB_InfoPanel.PCB_InfoPanel_C.CmsDataRead
// (Event, Public, BlueprintEvent)
// Parameters:

void UPCB_InfoPanel_C::CmsDataRead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCB_InfoPanel_C", "CmsDataRead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PCB_InfoPanel.PCB_InfoPanel_C.ExecuteUbergraph_PCB_InfoPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPCBHeader_ReturnValue                                (None)
// class FText                        CallFunc_GetPCBDescription_ReturnValue                           (None)

void UPCB_InfoPanel_C::ExecuteUbergraph_PCB_InfoPanel(int32 EntryPoint, class FText CallFunc_GetPCBHeader_ReturnValue, class FText CallFunc_GetPCBDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCB_InfoPanel_C", "ExecuteUbergraph_PCB_InfoPanel");

	Params::UPCB_InfoPanel_C_ExecuteUbergraph_PCB_InfoPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPCBHeader_ReturnValue = CallFunc_GetPCBHeader_ReturnValue;
	Parms.CallFunc_GetPCBDescription_ReturnValue = CallFunc_GetPCBDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


