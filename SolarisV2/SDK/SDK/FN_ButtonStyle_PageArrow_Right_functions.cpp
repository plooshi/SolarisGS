#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_PageArrow_Right.ButtonStyle_PageArrow_Right_C
// (None)

class UClass* UButtonStyle_PageArrow_Right_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_PageArrow_Right_C");

	return Clss;
}


// ButtonStyle_PageArrow_Right_C ButtonStyle_PageArrow_Right.Default__ButtonStyle_PageArrow_Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_PageArrow_Right_C* UButtonStyle_PageArrow_Right_C::GetDefaultObj()
{
	static class UButtonStyle_PageArrow_Right_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_PageArrow_Right_C*>(UButtonStyle_PageArrow_Right_C::StaticClass()->DefaultObject);

	return Default;
}

}


