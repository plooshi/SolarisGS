#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_STW_Default.Frontend_STW_Default_C
// (Actor)

class UClass* AFrontend_STW_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_STW_Default_C");

	return Clss;
}


// Frontend_STW_Default_C Frontend_STW_Default.Default__Frontend_STW_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_STW_Default_C* AFrontend_STW_Default_C::GetDefaultObj()
{
	static class AFrontend_STW_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_STW_Default_C*>(AFrontend_STW_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


