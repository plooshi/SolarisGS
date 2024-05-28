#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_HappyPlace.PP_HappyPlace_C
// (Actor)

class UClass* APP_HappyPlace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_HappyPlace_C");

	return Clss;
}


// PP_HappyPlace_C PP_HappyPlace.Default__PP_HappyPlace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_HappyPlace_C* APP_HappyPlace_C::GetDefaultObj()
{
	static class APP_HappyPlace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_HappyPlace_C*>(APP_HappyPlace_C::StaticClass()->DefaultObject);

	return Default;
}

}


