#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength10.HuskStrength10_C
// (None)

class UClass* UHuskStrength10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength10_C");

	return Clss;
}


// HuskStrength10_C HuskStrength10.Default__HuskStrength10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength10_C* UHuskStrength10_C::GetDefaultObj()
{
	static class UHuskStrength10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength10_C*>(UHuskStrength10_C::StaticClass()->DefaultObject);

	return Default;
}

}


