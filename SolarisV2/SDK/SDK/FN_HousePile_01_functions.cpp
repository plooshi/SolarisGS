#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HousePile_01.HousePile_01_C
// (Actor)

class UClass* AHousePile_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HousePile_01_C");

	return Clss;
}


// HousePile_01_C HousePile_01.Default__HousePile_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHousePile_01_C* AHousePile_01_C::GetDefaultObj()
{
	static class AHousePile_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHousePile_01_C*>(AHousePile_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


