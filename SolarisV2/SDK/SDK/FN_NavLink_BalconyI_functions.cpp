#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_BalconyI.NavLink_BalconyI_C
// (None)

class UClass* UNavLink_BalconyI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_BalconyI_C");

	return Clss;
}


// NavLink_BalconyI_C NavLink_BalconyI.Default__NavLink_BalconyI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_BalconyI_C* UNavLink_BalconyI_C::GetDefaultObj()
{
	static class UNavLink_BalconyI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_BalconyI_C*>(UNavLink_BalconyI_C::StaticClass()->DefaultObject);

	return Default;
}

}


