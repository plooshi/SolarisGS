#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_PageArrow_Left.ButtonStyle_PageArrow_Left_C
// (None)

class UClass* UButtonStyle_PageArrow_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_PageArrow_Left_C");

	return Clss;
}


// ButtonStyle_PageArrow_Left_C ButtonStyle_PageArrow_Left.Default__ButtonStyle_PageArrow_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_PageArrow_Left_C* UButtonStyle_PageArrow_Left_C::GetDefaultObj()
{
	static class UButtonStyle_PageArrow_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_PageArrow_Left_C*>(UButtonStyle_PageArrow_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


