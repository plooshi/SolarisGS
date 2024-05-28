#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HousePile_04.HousePile_04_C
// (Actor)

class UClass* AHousePile_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HousePile_04_C");

	return Clss;
}


// HousePile_04_C HousePile_04.Default__HousePile_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHousePile_04_C* AHousePile_04_C::GetDefaultObj()
{
	static class AHousePile_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHousePile_04_C*>(AHousePile_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


