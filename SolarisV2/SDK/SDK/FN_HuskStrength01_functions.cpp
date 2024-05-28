#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength01.HuskStrength01_C
// (None)

class UClass* UHuskStrength01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength01_C");

	return Clss;
}


// HuskStrength01_C HuskStrength01.Default__HuskStrength01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength01_C* UHuskStrength01_C::GetDefaultObj()
{
	static class UHuskStrength01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength01_C*>(UHuskStrength01_C::StaticClass()->DefaultObject);

	return Default;
}

}


