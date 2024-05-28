#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LocalUserEntry.LocalUserEntry_C
// (None)

class UClass* ULocalUserEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalUserEntry_C");

	return Clss;
}


// LocalUserEntry_C LocalUserEntry.Default__LocalUserEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULocalUserEntry_C* ULocalUserEntry_C::GetDefaultObj()
{
	static class ULocalUserEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalUserEntry_C*>(ULocalUserEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELocalUserOnlineStatus  InLocalUserOnlineStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocalUserOnlineStatus  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::HandleOnlineIndicatorView(enum class ELocalUserOnlineStatus InLocalUserOnlineStatus, enum class ELocalUserOnlineStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalUserEntry_C", "HandleOnlineIndicatorView");

	Params::ULocalUserEntry_C_HandleOnlineIndicatorView_Params Parms{};

	Parms.InLocalUserOnlineStatus = InLocalUserOnlineStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULocalUserEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalUserEntry_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULocalUserEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalUserEntry_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ELocalUserOnlineStatus  OnlineStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalUserEntry_C", "OnOnlineStatusChanged");

	Params::ULocalUserEntry_C_OnOnlineStatusChanged_Params Parms{};

	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocalUserOnlineStatus  K2Node_Event_OnlineStatus                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::ExecuteUbergraph_LocalUserEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ELocalUserOnlineStatus K2Node_Event_OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalUserEntry_C", "ExecuteUbergraph_LocalUserEntry");

	Params::ULocalUserEntry_C_ExecuteUbergraph_LocalUserEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_OnlineStatus = K2Node_Event_OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);

}

}


