#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Arrow-Right.ButtonStyle-Arrow-Right_C
// (None)

class UClass* UButtonStyleMinusArrowMinusRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Arrow-Right_C");

	return Clss;
}


// ButtonStyle-Arrow-Right_C ButtonStyle-Arrow-Right.Default__ButtonStyle-Arrow-Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusArrowMinusRight_C* UButtonStyleMinusArrowMinusRight_C::GetDefaultObj()
{
	static class UButtonStyleMinusArrowMinusRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusArrowMinusRight_C*>(UButtonStyleMinusArrowMinusRight_C::StaticClass()->DefaultObject);

	return Default;
}

}


