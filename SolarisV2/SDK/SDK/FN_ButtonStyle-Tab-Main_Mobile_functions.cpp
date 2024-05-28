#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Main_Mobile.ButtonStyle-Tab-Main_Mobile_C
// (None)

class UClass* UButtonStyleMinusTabMinusMain_Mobile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Main_Mobile_C");

	return Clss;
}


// ButtonStyle-Tab-Main_Mobile_C ButtonStyle-Tab-Main_Mobile.Default__ButtonStyle-Tab-Main_Mobile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusMain_Mobile_C* UButtonStyleMinusTabMinusMain_Mobile_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusMain_Mobile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusMain_Mobile_C*>(UButtonStyleMinusTabMinusMain_Mobile_C::StaticClass()->DefaultObject);

	return Default;
}

}


