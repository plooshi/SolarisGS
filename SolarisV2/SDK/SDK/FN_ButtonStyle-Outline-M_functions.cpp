#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-M.ButtonStyle-Outline-M_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-M_C");

	return Clss;
}


// ButtonStyle-Outline-M_C ButtonStyle-Outline-M.Default__ButtonStyle-Outline-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusM_C* UButtonStyleMinusOutlineMinusM_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusM_C*>(UButtonStyleMinusOutlineMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


