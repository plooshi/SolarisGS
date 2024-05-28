#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Generic_Revive.GE_Generic_Revive_C
// (None)

class UClass* UGE_Generic_Revive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Generic_Revive_C");

	return Clss;
}


// GE_Generic_Revive_C GE_Generic_Revive.Default__GE_Generic_Revive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Generic_Revive_C* UGE_Generic_Revive_C::GetDefaultObj()
{
	static class UGE_Generic_Revive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Generic_Revive_C*>(UGE_Generic_Revive_C::StaticClass()->DefaultObject);

	return Default;
}

}


