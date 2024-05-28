#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Red.PP_Red_C
// (Actor)

class UClass* APP_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Red_C");

	return Clss;
}


// PP_Red_C PP_Red.Default__PP_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Red_C* APP_Red_C::GetDefaultObj()
{
	static class APP_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Red_C*>(APP_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


