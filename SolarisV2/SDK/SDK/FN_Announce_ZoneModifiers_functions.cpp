#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_ZoneModifiers.Announce_ZoneModifiers_C
// (Actor)

class UClass* AAnnounce_ZoneModifiers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_ZoneModifiers_C");

	return Clss;
}


// Announce_ZoneModifiers_C Announce_ZoneModifiers.Default__Announce_ZoneModifiers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_ZoneModifiers_C* AAnnounce_ZoneModifiers_C::GetDefaultObj()
{
	static class AAnnounce_ZoneModifiers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_ZoneModifiers_C*>(AAnnounce_ZoneModifiers_C::StaticClass()->DefaultObject);

	return Default;
}

}


