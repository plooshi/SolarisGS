#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_StairT.NavLink_StairT_C
// (None)

class UClass* UNavLink_StairT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_StairT_C");

	return Clss;
}


// NavLink_StairT_C NavLink_StairT.Default__NavLink_StairT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_StairT_C* UNavLink_StairT_C::GetDefaultObj()
{
	static class UNavLink_StairT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_StairT_C*>(UNavLink_StairT_C::StaticClass()->DefaultObject);

	return Default;
}

}


