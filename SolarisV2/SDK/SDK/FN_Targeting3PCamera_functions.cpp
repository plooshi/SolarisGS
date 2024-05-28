#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Targeting3PCamera.Targeting3PCamera_C
// (None)

class UClass* UTargeting3PCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Targeting3PCamera_C");

	return Clss;
}


// Targeting3PCamera_C Targeting3PCamera.Default__Targeting3PCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTargeting3PCamera_C* UTargeting3PCamera_C::GetDefaultObj()
{
	static class UTargeting3PCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargeting3PCamera_C*>(UTargeting3PCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


