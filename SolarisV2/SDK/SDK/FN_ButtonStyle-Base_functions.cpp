#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Base.ButtonStyle-Base_C
// (None)

class UClass* UButtonStyleMinusBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Base_C");

	return Clss;
}


// ButtonStyle-Base_C ButtonStyle-Base.Default__ButtonStyle-Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusBase_C* UButtonStyleMinusBase_C::GetDefaultObj()
{
	static class UButtonStyleMinusBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusBase_C*>(UButtonStyleMinusBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


