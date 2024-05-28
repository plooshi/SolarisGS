#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-M.ButtonStyle-Primary-M_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-M_C");

	return Clss;
}


// ButtonStyle-Primary-M_C ButtonStyle-Primary-M.Default__ButtonStyle-Primary-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusM_C* UButtonStyleMinusPrimaryMinusM_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusM_C*>(UButtonStyleMinusPrimaryMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


