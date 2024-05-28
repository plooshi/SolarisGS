#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-BottomBar_Refresh.ButtonStyle-BottomBar_Refresh_C
// (None)

class UClass* UButtonStyleMinusBottomBar_Refresh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-BottomBar_Refresh_C");

	return Clss;
}


// ButtonStyle-BottomBar_Refresh_C ButtonStyle-BottomBar_Refresh.Default__ButtonStyle-BottomBar_Refresh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusBottomBar_Refresh_C* UButtonStyleMinusBottomBar_Refresh_C::GetDefaultObj()
{
	static class UButtonStyleMinusBottomBar_Refresh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusBottomBar_Refresh_C*>(UButtonStyleMinusBottomBar_Refresh_C::StaticClass()->DefaultObject);

	return Default;
}

}


