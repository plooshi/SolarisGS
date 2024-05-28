#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GiftBoxButton.GiftBoxButton_C
// (None)

class UClass* UGiftBoxButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GiftBoxButton_C");

	return Clss;
}


// GiftBoxButton_C GiftBoxButton.Default__GiftBoxButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGiftBoxButton_C* UGiftBoxButton_C::GetDefaultObj()
{
	static class UGiftBoxButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGiftBoxButton_C*>(UGiftBoxButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftBoxButton.GiftBoxButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGiftBoxButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftBoxButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GiftBoxButton.GiftBoxButton_C.PlayGiftSelectedAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftBoxButton_C::PlayGiftSelectedAnimation(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftBoxButton_C", "PlayGiftSelectedAnimation");

	Params::UGiftBoxButton_C_PlayGiftSelectedAnimation_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftBoxButton.GiftBoxButton_C.ExecuteUbergraph_GiftBoxButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftBoxButton_C::ExecuteUbergraph_GiftBoxButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftBoxButton_C", "ExecuteUbergraph_GiftBoxButton");

	Params::UGiftBoxButton_C_ExecuteUbergraph_GiftBoxButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


