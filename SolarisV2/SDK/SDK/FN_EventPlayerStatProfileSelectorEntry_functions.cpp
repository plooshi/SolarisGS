#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C
// (None)

class UClass* UEventPlayerStatProfileSelectorEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventPlayerStatProfileSelectorEntry_C");

	return Clss;
}


// EventPlayerStatProfileSelectorEntry_C EventPlayerStatProfileSelectorEntry.Default__EventPlayerStatProfileSelectorEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventPlayerStatProfileSelectorEntry_C* UEventPlayerStatProfileSelectorEntry_C::GetDefaultObj()
{
	static class UEventPlayerStatProfileSelectorEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventPlayerStatProfileSelectorEntry_C*>(UEventPlayerStatProfileSelectorEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelectorEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelectorEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.ExecuteUbergraph_EventPlayerStatProfileSelectorEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPlayerStatProfileSelectorEntry_C::ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "ExecuteUbergraph_EventPlayerStatProfileSelectorEntry");

	Params::UEventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelectorEntry_C::Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelectorEntry_C::Hovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "Hovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


