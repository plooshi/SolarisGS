#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ranged3PCamera.Ranged3PCamera_C
// (None)

class UClass* URanged3PCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ranged3PCamera_C");

	return Clss;
}


// Ranged3PCamera_C Ranged3PCamera.Default__Ranged3PCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URanged3PCamera_C* URanged3PCamera_C::GetDefaultObj()
{
	static class URanged3PCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URanged3PCamera_C*>(URanged3PCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


