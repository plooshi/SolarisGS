#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prop_TirePile_02.Prop_TirePile_02_C
// (Actor)

class UClass* AProp_TirePile_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prop_TirePile_02_C");

	return Clss;
}


// Prop_TirePile_02_C Prop_TirePile_02.Default__Prop_TirePile_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProp_TirePile_02_C* AProp_TirePile_02_C::GetDefaultObj()
{
	static class AProp_TirePile_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProp_TirePile_02_C*>(AProp_TirePile_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


