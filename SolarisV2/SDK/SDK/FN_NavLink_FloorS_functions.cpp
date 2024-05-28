#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_FloorS.NavLink_FloorS_C
// (None)

class UClass* UNavLink_FloorS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_FloorS_C");

	return Clss;
}


// NavLink_FloorS_C NavLink_FloorS.Default__NavLink_FloorS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_FloorS_C* UNavLink_FloorS_C::GetDefaultObj()
{
	static class UNavLink_FloorS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_FloorS_C*>(UNavLink_FloorS_C::StaticClass()->DefaultObject);

	return Default;
}

}


