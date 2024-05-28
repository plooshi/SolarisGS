#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommandRoomItemPedestal.CommandRoomItemPedestal_C
// (Actor)

class UClass* ACommandRoomItemPedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommandRoomItemPedestal_C");

	return Clss;
}


// CommandRoomItemPedestal_C CommandRoomItemPedestal.Default__CommandRoomItemPedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACommandRoomItemPedestal_C* ACommandRoomItemPedestal_C::GetDefaultObj()
{
	static class ACommandRoomItemPedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACommandRoomItemPedestal_C*>(ACommandRoomItemPedestal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.OnHeroPawnSetupCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACommandRoomItemPedestal_C::OnHeroPawnSetupCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRoomItemPedestal_C", "OnHeroPawnSetupCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.ExecuteUbergraph_CommandRoomItemPedestal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICustomCharacterPartOwnerInterface>CallFunc_PlayAnimationsMatchingQuery_self_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACommandRoomItemPedestal_C::ExecuteUbergraph_CommandRoomItemPedestal(int32 EntryPoint, TScriptInterface<class ICustomCharacterPartOwnerInterface> CallFunc_PlayAnimationsMatchingQuery_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRoomItemPedestal_C", "ExecuteUbergraph_CommandRoomItemPedestal");

	Params::ACommandRoomItemPedestal_C_ExecuteUbergraph_CommandRoomItemPedestal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationsMatchingQuery_self_CastInput = CallFunc_PlayAnimationsMatchingQuery_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


