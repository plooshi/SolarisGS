#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_BalconyO.NavLink_BalconyO_C
// (None)

class UClass* UNavLink_BalconyO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_BalconyO_C");

	return Clss;
}


// NavLink_BalconyO_C NavLink_BalconyO.Default__NavLink_BalconyO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_BalconyO_C* UNavLink_BalconyO_C::GetDefaultObj()
{
	static class UNavLink_BalconyO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_BalconyO_C*>(UNavLink_BalconyO_C::StaticClass()->DefaultObject);

	return Default;
}

}


