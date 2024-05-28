#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WorldLightingMenu.WorldLightingMenu_C
// (Actor)

class UClass* AWorldLightingMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldLightingMenu_C");

	return Clss;
}


// WorldLightingMenu_C WorldLightingMenu.Default__WorldLightingMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWorldLightingMenu_C* AWorldLightingMenu_C::GetDefaultObj()
{
	static class AWorldLightingMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWorldLightingMenu_C*>(AWorldLightingMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


