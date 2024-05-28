#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Dark.PP_Dark_C
// (Actor)

class UClass* APP_Dark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Dark_C");

	return Clss;
}


// PP_Dark_C PP_Dark.Default__PP_Dark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Dark_C* APP_Dark_C::GetDefaultObj()
{
	static class APP_Dark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Dark_C*>(APP_Dark_C::StaticClass()->DefaultObject);

	return Default;
}

}


