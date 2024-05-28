#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrapArmGeneric.GE_TrapArmGeneric_C
// (None)

class UClass* UGE_TrapArmGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrapArmGeneric_C");

	return Clss;
}


// GE_TrapArmGeneric_C GE_TrapArmGeneric.Default__GE_TrapArmGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrapArmGeneric_C* UGE_TrapArmGeneric_C::GetDefaultObj()
{
	static class UGE_TrapArmGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrapArmGeneric_C*>(UGE_TrapArmGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


