#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength04.HuskStrength04_C
// (None)

class UClass* UHuskStrength04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength04_C");

	return Clss;
}


// HuskStrength04_C HuskStrength04.Default__HuskStrength04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength04_C* UHuskStrength04_C::GetDefaultObj()
{
	static class UHuskStrength04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength04_C*>(UHuskStrength04_C::StaticClass()->DefaultObject);

	return Default;
}

}


