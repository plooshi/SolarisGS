#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class IbmStreamingMedia.IbmStreamingMediaSettings
// (None)

class UClass* UIbmStreamingMediaSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IbmStreamingMediaSettings");

	return Clss;
}


// IbmStreamingMediaSettings IbmStreamingMedia.Default__IbmStreamingMediaSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UIbmStreamingMediaSettings* UIbmStreamingMediaSettings::GetDefaultObj()
{
	static class UIbmStreamingMediaSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UIbmStreamingMediaSettings*>(UIbmStreamingMediaSettings::StaticClass()->DefaultObject);

	return Default;
}

}


