#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_BG_Main.Frontend_BG_Main_C
// (Actor)

class UClass* AFrontend_BG_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_BG_Main_C");

	return Clss;
}


// Frontend_BG_Main_C Frontend_BG_Main.Default__Frontend_BG_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_BG_Main_C* AFrontend_BG_Main_C::GetDefaultObj()
{
	static class AFrontend_BG_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_BG_Main_C*>(AFrontend_BG_Main_C::StaticClass()->DefaultObject);

	return Default;
}

}


