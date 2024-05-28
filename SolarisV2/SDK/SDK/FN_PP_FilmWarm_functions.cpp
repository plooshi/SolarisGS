#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_FilmWarm.PP_FilmWarm_C
// (Actor)

class UClass* APP_FilmWarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_FilmWarm_C");

	return Clss;
}


// PP_FilmWarm_C PP_FilmWarm.Default__PP_FilmWarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_FilmWarm_C* APP_FilmWarm_C::GetDefaultObj()
{
	static class APP_FilmWarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_FilmWarm_C*>(APP_FilmWarm_C::StaticClass()->DefaultObject);

	return Default;
}

}


