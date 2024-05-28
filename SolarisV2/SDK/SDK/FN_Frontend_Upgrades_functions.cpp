#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Upgrades.Frontend_Upgrades_C
// (Actor)

class UClass* AFrontend_Upgrades_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Upgrades_C");

	return Clss;
}


// Frontend_Upgrades_C Frontend_Upgrades.Default__Frontend_Upgrades_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Upgrades_C* AFrontend_Upgrades_C::GetDefaultObj()
{
	static class AFrontend_Upgrades_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Upgrades_C*>(AFrontend_Upgrades_C::StaticClass()->DefaultObject);

	return Default;
}

}


