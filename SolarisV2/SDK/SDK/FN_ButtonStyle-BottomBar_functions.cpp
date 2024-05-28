#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-BottomBar.ButtonStyle-BottomBar_C
// (None)

class UClass* UButtonStyleMinusBottomBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-BottomBar_C");

	return Clss;
}


// ButtonStyle-BottomBar_C ButtonStyle-BottomBar.Default__ButtonStyle-BottomBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusBottomBar_C* UButtonStyleMinusBottomBar_C::GetDefaultObj()
{
	static class UButtonStyleMinusBottomBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusBottomBar_C*>(UButtonStyleMinusBottomBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


