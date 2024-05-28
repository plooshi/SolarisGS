#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UseableWeaponsObject.UseableWeaponsObject_C
// (None)

class UClass* UUseableWeaponsObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UseableWeaponsObject_C");

	return Clss;
}


// UseableWeaponsObject_C UseableWeaponsObject.Default__UseableWeaponsObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUseableWeaponsObject_C* UUseableWeaponsObject_C::GetDefaultObj()
{
	static class UUseableWeaponsObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUseableWeaponsObject_C*>(UUseableWeaponsObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UseableWeaponsObject.UseableWeaponsObject_C.ExecuteUbergraph_UseableWeaponsObject
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUseableWeaponsObject_C::ExecuteUbergraph_UseableWeaponsObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UseableWeaponsObject_C", "ExecuteUbergraph_UseableWeaponsObject");

	Params::UUseableWeaponsObject_C_ExecuteUbergraph_UseableWeaponsObject_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


