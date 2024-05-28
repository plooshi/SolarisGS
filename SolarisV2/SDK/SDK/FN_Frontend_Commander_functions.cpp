#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Commander.Frontend_Commander_C
// (Actor)

class UClass* AFrontend_Commander_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Commander_C");

	return Clss;
}


// Frontend_Commander_C Frontend_Commander.Default__Frontend_Commander_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Commander_C* AFrontend_Commander_C::GetDefaultObj()
{
	static class AFrontend_Commander_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Commander_C*>(AFrontend_Commander_C::StaticClass()->DefaultObject);

	return Default;
}

}


