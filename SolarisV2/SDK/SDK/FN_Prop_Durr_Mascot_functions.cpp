#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prop_Durr_Mascot.Prop_Durr_Mascot_C
// (Actor)

class UClass* AProp_Durr_Mascot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prop_Durr_Mascot_C");

	return Clss;
}


// Prop_Durr_Mascot_C Prop_Durr_Mascot.Default__Prop_Durr_Mascot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProp_Durr_Mascot_C* AProp_Durr_Mascot_C::GetDefaultObj()
{
	static class AProp_Durr_Mascot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProp_Durr_Mascot_C*>(AProp_Durr_Mascot_C::StaticClass()->DefaultObject);

	return Default;
}

}


