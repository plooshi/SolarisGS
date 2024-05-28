#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class IbmStreamingMediaFactory.IbmMediaSettings
// (None)

class UClass* UIbmMediaSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IbmMediaSettings");

	return Clss;
}


// IbmMediaSettings IbmStreamingMediaFactory.Default__IbmMediaSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UIbmMediaSettings* UIbmMediaSettings::GetDefaultObj()
{
	static class UIbmMediaSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UIbmMediaSettings*>(UIbmMediaSettings::StaticClass()->DefaultObject);

	return Default;
}

}


