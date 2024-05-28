#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Com-LSkew.ButtonStyle-Com-LSkew_C
// (None)

class UClass* UButtonStyleMinusComMinusLSkew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Com-LSkew_C");

	return Clss;
}


// ButtonStyle-Com-LSkew_C ButtonStyle-Com-LSkew.Default__ButtonStyle-Com-LSkew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusComMinusLSkew_C* UButtonStyleMinusComMinusLSkew_C::GetDefaultObj()
{
	static class UButtonStyleMinusComMinusLSkew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusComMinusLSkew_C*>(UButtonStyleMinusComMinusLSkew_C::StaticClass()->DefaultObject);

	return Default;
}

}


