#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Feature_L.ButtonStyle_Feature_L_C
// (None)

class UClass* UButtonStyle_Feature_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Feature_L_C");

	return Clss;
}


// ButtonStyle_Feature_L_C ButtonStyle_Feature_L.Default__ButtonStyle_Feature_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Feature_L_C* UButtonStyle_Feature_L_C::GetDefaultObj()
{
	static class UButtonStyle_Feature_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Feature_L_C*>(UButtonStyle_Feature_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


