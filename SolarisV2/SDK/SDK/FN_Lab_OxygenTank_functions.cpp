#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lab_OxygenTank.Lab_OxygenTank_C
// (Actor)

class UClass* ALab_OxygenTank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lab_OxygenTank_C");

	return Clss;
}


// Lab_OxygenTank_C Lab_OxygenTank.Default__Lab_OxygenTank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALab_OxygenTank_C* ALab_OxygenTank_C::GetDefaultObj()
{
	static class ALab_OxygenTank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALab_OxygenTank_C*>(ALab_OxygenTank_C::StaticClass()->DefaultObject);

	return Default;
}

}


