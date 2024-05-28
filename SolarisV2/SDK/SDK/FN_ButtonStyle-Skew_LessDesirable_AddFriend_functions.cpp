#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_LessDesirable_AddFriend.ButtonStyle-Skew_LessDesirable_AddFriend_C
// (None)

class UClass* UButtonStyleMinusSkew_LessDesirable_AddFriend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_LessDesirable_AddFriend_C");

	return Clss;
}


// ButtonStyle-Skew_LessDesirable_AddFriend_C ButtonStyle-Skew_LessDesirable_AddFriend.Default__ButtonStyle-Skew_LessDesirable_AddFriend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_LessDesirable_AddFriend_C* UButtonStyleMinusSkew_LessDesirable_AddFriend_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_LessDesirable_AddFriend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_LessDesirable_AddFriend_C*>(UButtonStyleMinusSkew_LessDesirable_AddFriend_C::StaticClass()->DefaultObject);

	return Default;
}

}


