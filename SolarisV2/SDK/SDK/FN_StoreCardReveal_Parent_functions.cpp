#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoreCardReveal_Parent.StoreCardReveal_Parent_C
// (Actor)

class UClass* AStoreCardReveal_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreCardReveal_Parent_C");

	return Clss;
}


// StoreCardReveal_Parent_C StoreCardReveal_Parent.Default__StoreCardReveal_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStoreCardReveal_Parent_C* AStoreCardReveal_Parent_C::GetDefaultObj()
{
	static class AStoreCardReveal_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStoreCardReveal_Parent_C*>(AStoreCardReveal_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_Parent_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "InitiatePinata");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_Parent_C::ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "ExecuteUbergraph_StoreCardReveal_Parent");

	Params::AStoreCardReveal_Parent_C_ExecuteUbergraph_StoreCardReveal_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


