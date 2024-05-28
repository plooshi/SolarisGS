#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeavePlatformPartyButton.LeavePlatformPartyButton_C
// (None)

class UClass* ULeavePlatformPartyButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeavePlatformPartyButton_C");

	return Clss;
}


// LeavePlatformPartyButton_C LeavePlatformPartyButton.Default__LeavePlatformPartyButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeavePlatformPartyButton_C* ULeavePlatformPartyButton_C::GetDefaultObj()
{
	static class ULeavePlatformPartyButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeavePlatformPartyButton_C*>(ULeavePlatformPartyButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        New_Text                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeavePlatformPartyButton_C::SetText(class FText New_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "SetText");

	Params::ULeavePlatformPartyButton_C_SetText_Params Parms{};

	Parms.New_Text = New_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULeavePlatformPartyButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULeavePlatformPartyButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeavePlatformPartyButton_C::ExecuteUbergraph_LeavePlatformPartyButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeavePlatformPartyButton_C", "ExecuteUbergraph_LeavePlatformPartyButton");

	Params::ULeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


