#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength00.HuskStrength00_C
// (None)

class UClass* UHuskStrength00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength00_C");

	return Clss;
}


// HuskStrength00_C HuskStrength00.Default__HuskStrength00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength00_C* UHuskStrength00_C::GetDefaultObj()
{
	static class UHuskStrength00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength00_C*>(UHuskStrength00_C::StaticClass()->DefaultObject);

	return Default;
}

}


