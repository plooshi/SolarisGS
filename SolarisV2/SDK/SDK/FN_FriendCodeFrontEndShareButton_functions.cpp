#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C
// (None)

class UClass* UFriendCodeFrontEndShareButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendCodeFrontEndShareButton_C");

	return Clss;
}


// FriendCodeFrontEndShareButton_C FriendCodeFrontEndShareButton.Default__FriendCodeFrontEndShareButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFriendCodeFrontEndShareButton_C* UFriendCodeFrontEndShareButton_C::GetDefaultObj()
{
	static class UFriendCodeFrontEndShareButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendCodeFrontEndShareButton_C*>(UFriendCodeFrontEndShareButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendCodeFrontEndShareButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeFrontEndShareButton_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendCodeFrontEndShareButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeFrontEndShareButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.ExecuteUbergraph_FriendCodeFrontEndShareButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendCodeFrontEndShareButton_C::ExecuteUbergraph_FriendCodeFrontEndShareButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendCodeFrontEndShareButton_C", "ExecuteUbergraph_FriendCodeFrontEndShareButton");

	Params::UFriendCodeFrontEndShareButton_C_ExecuteUbergraph_FriendCodeFrontEndShareButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


