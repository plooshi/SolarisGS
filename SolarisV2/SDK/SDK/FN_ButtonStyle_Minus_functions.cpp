#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Minus.ButtonStyle_Minus_C
// (None)

class UClass* UButtonStyle_Minus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Minus_C");

	return Clss;
}


// ButtonStyle_Minus_C ButtonStyle_Minus.Default__ButtonStyle_Minus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Minus_C* UButtonStyle_Minus_C::GetDefaultObj()
{
	static class UButtonStyle_Minus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Minus_C*>(UButtonStyle_Minus_C::StaticClass()->DefaultObject);

	return Default;
}

}


