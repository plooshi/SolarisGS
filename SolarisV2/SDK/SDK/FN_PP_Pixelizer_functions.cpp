#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Pixelizer.PP_Pixelizer_C
// (Actor)

class UClass* APP_Pixelizer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Pixelizer_C");

	return Clss;
}


// PP_Pixelizer_C PP_Pixelizer.Default__PP_Pixelizer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Pixelizer_C* APP_Pixelizer_C::GetDefaultObj()
{
	static class APP_Pixelizer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Pixelizer_C*>(APP_Pixelizer_C::StaticClass()->DefaultObject);

	return Default;
}

}


