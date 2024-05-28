#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_RoofC.NavLink_RoofC_C
// (None)

class UClass* UNavLink_RoofC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_RoofC_C");

	return Clss;
}


// NavLink_RoofC_C NavLink_RoofC.Default__NavLink_RoofC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_RoofC_C* UNavLink_RoofC_C::GetDefaultObj()
{
	static class UNavLink_RoofC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_RoofC_C*>(UNavLink_RoofC_C::StaticClass()->DefaultObject);

	return Default;
}

}


