#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prop_PlantPotted05.Prop_PlantPotted05_C
// (Actor)

class UClass* AProp_PlantPotted05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prop_PlantPotted05_C");

	return Clss;
}


// Prop_PlantPotted05_C Prop_PlantPotted05.Default__Prop_PlantPotted05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProp_PlantPotted05_C* AProp_PlantPotted05_C::GetDefaultObj()
{
	static class AProp_PlantPotted05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProp_PlantPotted05_C*>(AProp_PlantPotted05_C::StaticClass()->DefaultObject);

	return Default;
}

}


