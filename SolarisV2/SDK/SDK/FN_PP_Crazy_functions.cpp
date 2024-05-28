#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Crazy.PP_Crazy_C
// (Actor)

class UClass* APP_Crazy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Crazy_C");

	return Clss;
}


// PP_Crazy_C PP_Crazy.Default__PP_Crazy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Crazy_C* APP_Crazy_C::GetDefaultObj()
{
	static class APP_Crazy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Crazy_C*>(APP_Crazy_C::StaticClass()->DefaultObject);

	return Default;
}

}


