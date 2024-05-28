#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_Gen_Basic.Announce_Gen_Basic_C
// (Actor)

class UClass* AAnnounce_Gen_Basic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_Gen_Basic_C");

	return Clss;
}


// Announce_Gen_Basic_C Announce_Gen_Basic.Default__Announce_Gen_Basic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_Gen_Basic_C* AAnnounce_Gen_Basic_C::GetDefaultObj()
{
	static class AAnnounce_Gen_Basic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_Gen_Basic_C*>(AAnnounce_Gen_Basic_C::StaticClass()->DefaultObject);

	return Default;
}

}


