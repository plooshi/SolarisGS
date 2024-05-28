#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default3PCamera.Default3PCamera_C
// (None)

class UClass* UDefault3PCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default3PCamera_C");

	return Clss;
}


// Default3PCamera_C Default3PCamera.Default__Default3PCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault3PCamera_C* UDefault3PCamera_C::GetDefaultObj()
{
	static class UDefault3PCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault3PCamera_C*>(UDefault3PCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


