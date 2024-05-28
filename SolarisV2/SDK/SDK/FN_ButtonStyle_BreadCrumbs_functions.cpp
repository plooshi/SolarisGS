#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_BreadCrumbs.ButtonStyle_BreadCrumbs_C
// (None)

class UClass* UButtonStyle_BreadCrumbs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_BreadCrumbs_C");

	return Clss;
}


// ButtonStyle_BreadCrumbs_C ButtonStyle_BreadCrumbs.Default__ButtonStyle_BreadCrumbs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_BreadCrumbs_C* UButtonStyle_BreadCrumbs_C::GetDefaultObj()
{
	static class UButtonStyle_BreadCrumbs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_BreadCrumbs_C*>(UButtonStyle_BreadCrumbs_C::StaticClass()->DefaultObject);

	return Default;
}

}


