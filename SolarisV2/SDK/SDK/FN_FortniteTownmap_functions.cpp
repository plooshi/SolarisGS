#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortniteTownmap.FortniteTownmap_C
// (Actor)

class UClass* AFortniteTownmap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortniteTownmap_C");

	return Clss;
}


// FortniteTownmap_C FortniteTownmap.Default__FortniteTownmap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFortniteTownmap_C* AFortniteTownmap_C::GetDefaultObj()
{
	static class AFortniteTownmap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortniteTownmap_C*>(AFortniteTownmap_C::StaticClass()->DefaultObject);

	return Default;
}

}


