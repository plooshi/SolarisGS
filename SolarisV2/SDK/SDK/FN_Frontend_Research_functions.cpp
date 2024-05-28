#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Research.Frontend_Research_C
// (Actor)

class UClass* AFrontend_Research_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Research_C");

	return Clss;
}


// Frontend_Research_C Frontend_Research.Default__Frontend_Research_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Research_C* AFrontend_Research_C::GetDefaultObj()
{
	static class AFrontend_Research_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Research_C*>(AFrontend_Research_C::StaticClass()->DefaultObject);

	return Default;
}

}


