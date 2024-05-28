#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Sepia.PP_Sepia_C
// (Actor)

class UClass* APP_Sepia_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Sepia_C");

	return Clss;
}


// PP_Sepia_C PP_Sepia.Default__PP_Sepia_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Sepia_C* APP_Sepia_C::GetDefaultObj()
{
	static class APP_Sepia_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Sepia_C*>(APP_Sepia_C::StaticClass()->DefaultObject);

	return Default;
}

}


