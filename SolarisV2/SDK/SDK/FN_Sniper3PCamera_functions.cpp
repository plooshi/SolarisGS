#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sniper3PCamera.Sniper3PCamera_C
// (None)

class UClass* USniper3PCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sniper3PCamera_C");

	return Clss;
}


// Sniper3PCamera_C Sniper3PCamera.Default__Sniper3PCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USniper3PCamera_C* USniper3PCamera_C::GetDefaultObj()
{
	static class USniper3PCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USniper3PCamera_C*>(USniper3PCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


