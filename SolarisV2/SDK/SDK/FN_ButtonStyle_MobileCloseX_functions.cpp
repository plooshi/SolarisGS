#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_MobileCloseX.ButtonStyle_MobileCloseX_C
// (None)

class UClass* UButtonStyle_MobileCloseX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_MobileCloseX_C");

	return Clss;
}


// ButtonStyle_MobileCloseX_C ButtonStyle_MobileCloseX.Default__ButtonStyle_MobileCloseX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_MobileCloseX_C* UButtonStyle_MobileCloseX_C::GetDefaultObj()
{
	static class UButtonStyle_MobileCloseX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_MobileCloseX_C*>(UButtonStyle_MobileCloseX_C::StaticClass()->DefaultObject);

	return Default;
}

}


