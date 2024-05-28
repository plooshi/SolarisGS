#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Oak.PP_Oak_C
// (Actor)

class UClass* APP_Oak_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Oak_C");

	return Clss;
}


// PP_Oak_C PP_Oak.Default__PP_Oak_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Oak_C* APP_Oak_C::GetDefaultObj()
{
	static class APP_Oak_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Oak_C*>(APP_Oak_C::StaticClass()->DefaultObject);

	return Default;
}

}


