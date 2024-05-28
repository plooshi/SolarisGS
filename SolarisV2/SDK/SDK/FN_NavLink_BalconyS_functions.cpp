#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_BalconyS.NavLink_BalconyS_C
// (None)

class UClass* UNavLink_BalconyS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_BalconyS_C");

	return Clss;
}


// NavLink_BalconyS_C NavLink_BalconyS.Default__NavLink_BalconyS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_BalconyS_C* UNavLink_BalconyS_C::GetDefaultObj()
{
	static class UNavLink_BalconyS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_BalconyS_C*>(UNavLink_BalconyS_C::StaticClass()->DefaultObject);

	return Default;
}

}


