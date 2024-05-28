#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortniteEngineLoadingScreen.FortniteUserInterfaceSettings
// (None)

class UClass* UFortniteUserInterfaceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortniteUserInterfaceSettings");

	return Clss;
}


// FortniteUserInterfaceSettings FortniteEngineLoadingScreen.Default__FortniteUserInterfaceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortniteUserInterfaceSettings* UFortniteUserInterfaceSettings::GetDefaultObj()
{
	static class UFortniteUserInterfaceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortniteUserInterfaceSettings*>(UFortniteUserInterfaceSettings::StaticClass()->DefaultObject);

	return Default;
}

}


