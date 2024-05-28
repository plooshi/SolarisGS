#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Right.ButtonStyle-Right_C
// (None)

class UClass* UButtonStyleMinusRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Right_C");

	return Clss;
}


// ButtonStyle-Right_C ButtonStyle-Right.Default__ButtonStyle-Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRight_C* UButtonStyleMinusRight_C::GetDefaultObj()
{
	static class UButtonStyleMinusRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRight_C*>(UButtonStyleMinusRight_C::StaticClass()->DefaultObject);

	return Default;
}

}


