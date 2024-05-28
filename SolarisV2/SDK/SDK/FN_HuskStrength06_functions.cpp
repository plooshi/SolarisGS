#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength06.HuskStrength06_C
// (None)

class UClass* UHuskStrength06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength06_C");

	return Clss;
}


// HuskStrength06_C HuskStrength06.Default__HuskStrength06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength06_C* UHuskStrength06_C::GetDefaultObj()
{
	static class UHuskStrength06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength06_C*>(UHuskStrength06_C::StaticClass()->DefaultObject);

	return Default;
}

}


