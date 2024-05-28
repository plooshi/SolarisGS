#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength03.HuskStrength03_C
// (None)

class UClass* UHuskStrength03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength03_C");

	return Clss;
}


// HuskStrength03_C HuskStrength03.Default__HuskStrength03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength03_C* UHuskStrength03_C::GetDefaultObj()
{
	static class UHuskStrength03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength03_C*>(UHuskStrength03_C::StaticClass()->DefaultObject);

	return Default;
}

}


