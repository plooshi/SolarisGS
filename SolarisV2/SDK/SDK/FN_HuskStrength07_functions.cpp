#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength07.HuskStrength07_C
// (None)

class UClass* UHuskStrength07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength07_C");

	return Clss;
}


// HuskStrength07_C HuskStrength07.Default__HuskStrength07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength07_C* UHuskStrength07_C::GetDefaultObj()
{
	static class UHuskStrength07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength07_C*>(UHuskStrength07_C::StaticClass()->DefaultObject);

	return Default;
}

}


