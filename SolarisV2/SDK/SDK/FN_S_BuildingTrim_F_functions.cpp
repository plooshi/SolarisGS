#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_BuildingTrim_F.S_BuildingTrim_F_C
// (Actor)

class UClass* AS_BuildingTrim_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_BuildingTrim_F_C");

	return Clss;
}


// S_BuildingTrim_F_C S_BuildingTrim_F.Default__S_BuildingTrim_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_BuildingTrim_F_C* AS_BuildingTrim_F_C::GetDefaultObj()
{
	static class AS_BuildingTrim_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_BuildingTrim_F_C*>(AS_BuildingTrim_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


