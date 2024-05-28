#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Secondary-M.ButtonStyle-Secondary-M_C
// (None)

class UClass* UButtonStyleMinusSecondaryMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Secondary-M_C");

	return Clss;
}


// ButtonStyle-Secondary-M_C ButtonStyle-Secondary-M.Default__ButtonStyle-Secondary-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSecondaryMinusM_C* UButtonStyleMinusSecondaryMinusM_C::GetDefaultObj()
{
	static class UButtonStyleMinusSecondaryMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSecondaryMinusM_C*>(UButtonStyleMinusSecondaryMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


