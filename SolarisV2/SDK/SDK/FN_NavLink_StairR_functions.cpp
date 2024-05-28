#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_StairR.NavLink_StairR_C
// (None)

class UClass* UNavLink_StairR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_StairR_C");

	return Clss;
}


// NavLink_StairR_C NavLink_StairR.Default__NavLink_StairR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_StairR_C* UNavLink_StairR_C::GetDefaultObj()
{
	static class UNavLink_StairR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_StairR_C*>(UNavLink_StairR_C::StaticClass()->DefaultObject);

	return Default;
}

}


