#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength09.HuskStrength09_C
// (None)

class UClass* UHuskStrength09_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength09_C");

	return Clss;
}


// HuskStrength09_C HuskStrength09.Default__HuskStrength09_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength09_C* UHuskStrength09_C::GetDefaultObj()
{
	static class UHuskStrength09_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength09_C*>(UHuskStrength09_C::StaticClass()->DefaultObject);

	return Default;
}

}


