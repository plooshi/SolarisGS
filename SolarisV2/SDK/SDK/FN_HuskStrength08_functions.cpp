#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HuskStrength08.HuskStrength08_C
// (None)

class UClass* UHuskStrength08_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HuskStrength08_C");

	return Clss;
}


// HuskStrength08_C HuskStrength08.Default__HuskStrength08_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuskStrength08_C* UHuskStrength08_C::GetDefaultObj()
{
	static class UHuskStrength08_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuskStrength08_C*>(UHuskStrength08_C::StaticClass()->DefaultObject);

	return Default;
}

}


