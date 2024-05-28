#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prop_PlantPotted02.Prop_PlantPotted02_C
// (Actor)

class UClass* AProp_PlantPotted02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prop_PlantPotted02_C");

	return Clss;
}


// Prop_PlantPotted02_C Prop_PlantPotted02.Default__Prop_PlantPotted02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProp_PlantPotted02_C* AProp_PlantPotted02_C::GetDefaultObj()
{
	static class AProp_PlantPotted02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProp_PlantPotted02_C*>(AProp_PlantPotted02_C::StaticClass()->DefaultObject);

	return Default;
}

}


