#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_FilmNoir.PP_FilmNoir_C
// (Actor)

class UClass* APP_FilmNoir_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_FilmNoir_C");

	return Clss;
}


// PP_FilmNoir_C PP_FilmNoir.Default__PP_FilmNoir_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_FilmNoir_C* APP_FilmNoir_C::GetDefaultObj()
{
	static class APP_FilmNoir_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_FilmNoir_C*>(APP_FilmNoir_C::StaticClass()->DefaultObject);

	return Default;
}

}


