#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class F5Player.F5PlayerSettings
// (None)

class UClass* UF5PlayerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F5PlayerSettings");

	return Clss;
}


// F5PlayerSettings F5Player.Default__F5PlayerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UF5PlayerSettings* UF5PlayerSettings::GetDefaultObj()
{
	static class UF5PlayerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UF5PlayerSettings*>(UF5PlayerSettings::StaticClass()->DefaultObject);

	return Default;
}

}


