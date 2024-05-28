#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-OutlineLargeBacchus.ButtonStyle-OutlineLargeBacchus_C
// (None)

class UClass* UButtonStyleMinusOutlineLargeBacchus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-OutlineLargeBacchus_C");

	return Clss;
}


// ButtonStyle-OutlineLargeBacchus_C ButtonStyle-OutlineLargeBacchus.Default__ButtonStyle-OutlineLargeBacchus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineLargeBacchus_C* UButtonStyleMinusOutlineLargeBacchus_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineLargeBacchus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineLargeBacchus_C*>(UButtonStyleMinusOutlineLargeBacchus_C::StaticClass()->DefaultObject);

	return Default;
}

}


