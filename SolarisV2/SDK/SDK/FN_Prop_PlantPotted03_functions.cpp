#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prop_PlantPotted03.Prop_PlantPotted03_C
// (Actor)

class UClass* AProp_PlantPotted03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prop_PlantPotted03_C");

	return Clss;
}


// Prop_PlantPotted03_C Prop_PlantPotted03.Default__Prop_PlantPotted03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProp_PlantPotted03_C* AProp_PlantPotted03_C::GetDefaultObj()
{
	static class AProp_PlantPotted03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProp_PlantPotted03_C*>(AProp_PlantPotted03_C::StaticClass()->DefaultObject);

	return Default;
}

}


