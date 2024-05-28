#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrapCooldownGeneric.GE_TrapCooldownGeneric_C
// (None)

class UClass* UGE_TrapCooldownGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrapCooldownGeneric_C");

	return Clss;
}


// GE_TrapCooldownGeneric_C GE_TrapCooldownGeneric.Default__GE_TrapCooldownGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrapCooldownGeneric_C* UGE_TrapCooldownGeneric_C::GetDefaultObj()
{
	static class UGE_TrapCooldownGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrapCooldownGeneric_C*>(UGE_TrapCooldownGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


