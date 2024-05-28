#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_Storm2018Cine.Announce_Storm2018Cine_C
// (Actor)

class UClass* AAnnounce_Storm2018Cine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_Storm2018Cine_C");

	return Clss;
}


// Announce_Storm2018Cine_C Announce_Storm2018Cine.Default__Announce_Storm2018Cine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_Storm2018Cine_C* AAnnounce_Storm2018Cine_C::GetDefaultObj()
{
	static class AAnnounce_Storm2018Cine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_Storm2018Cine_C*>(AAnnounce_Storm2018Cine_C::StaticClass()->DefaultObject);

	return Default;
}

}


