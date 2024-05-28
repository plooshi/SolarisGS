#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength05.HuskStrength05_C
// (None)

class UClass* UHuskStrength05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength05_C");

	return Clss;
}


// HuskStrength05_C HuskStrength05.Default__HuskStrength05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength05_C* UHuskStrength05_C::GetDefaultObj()
{
	static class UHuskStrength05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength05_C*>(UHuskStrength05_C::StaticClass()->DefaultObject);

	return Default;
}

}


