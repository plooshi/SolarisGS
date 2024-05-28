#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortniteWorldMap.FortniteWorldMap_C
// (Actor)

class UClass* AFortniteWorldMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortniteWorldMap_C");

	return Clss;
}


// FortniteWorldMap_C FortniteWorldMap.Default__FortniteWorldMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFortniteWorldMap_C* AFortniteWorldMap_C::GetDefaultObj()
{
	static class AFortniteWorldMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortniteWorldMap_C*>(AFortniteWorldMap_C::StaticClass()->DefaultObject);

	return Default;
}

}


