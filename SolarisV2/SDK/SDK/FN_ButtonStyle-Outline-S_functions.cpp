#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-S.ButtonStyle-Outline-S_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-S_C");

	return Clss;
}


// ButtonStyle-Outline-S_C ButtonStyle-Outline-S.Default__ButtonStyle-Outline-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusS_C* UButtonStyleMinusOutlineMinusS_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusS_C*>(UButtonStyleMinusOutlineMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


