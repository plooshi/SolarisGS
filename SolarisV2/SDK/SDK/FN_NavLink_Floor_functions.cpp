#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavLink_Floor.NavLink_Floor_C
// (None)

class UClass* UNavLink_Floor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLink_Floor_C");

	return Clss;
}


// NavLink_Floor_C NavLink_Floor.Default__NavLink_Floor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavLink_Floor_C* UNavLink_Floor_C::GetDefaultObj()
{
	static class UNavLink_Floor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLink_Floor_C*>(UNavLink_Floor_C::StaticClass()->DefaultObject);

	return Default;
}

}


