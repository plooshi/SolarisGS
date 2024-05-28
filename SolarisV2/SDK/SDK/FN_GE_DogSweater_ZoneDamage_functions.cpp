#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DogSweater_ZoneDamage.GE_DogSweater_ZoneDamage_C
// (None)

class UClass* UGE_DogSweater_ZoneDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DogSweater_ZoneDamage_C");

	return Clss;
}


// GE_DogSweater_ZoneDamage_C GE_DogSweater_ZoneDamage.Default__GE_DogSweater_ZoneDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DogSweater_ZoneDamage_C* UGE_DogSweater_ZoneDamage_C::GetDefaultObj()
{
	static class UGE_DogSweater_ZoneDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DogSweater_ZoneDamage_C*>(UGE_DogSweater_ZoneDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


