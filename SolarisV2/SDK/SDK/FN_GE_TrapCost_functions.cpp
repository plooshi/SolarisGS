#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrapCost.GE_TrapCost_C
// (None)

class UClass* UGE_TrapCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrapCost_C");

	return Clss;
}


// GE_TrapCost_C GE_TrapCost.Default__GE_TrapCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrapCost_C* UGE_TrapCost_C::GetDefaultObj()
{
	static class UGE_TrapCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrapCost_C*>(UGE_TrapCost_C::StaticClass()->DefaultObject);

	return Default;
}

}


