#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength02.HuskStrength02_C
// (None)

class UClass* UHuskStrength02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength02_C");

	return Clss;
}


// HuskStrength02_C HuskStrength02.Default__HuskStrength02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength02_C* UHuskStrength02_C::GetDefaultObj()
{
	static class UHuskStrength02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength02_C*>(UHuskStrength02_C::StaticClass()->DefaultObject);

	return Default;
}

}


