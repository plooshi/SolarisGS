#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class F5PlayerFactory.F5PlayerFactorySettings
// (None)

class UClass* UF5PlayerFactorySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F5PlayerFactorySettings");

	return Clss;
}


// F5PlayerFactorySettings F5PlayerFactory.Default__F5PlayerFactorySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UF5PlayerFactorySettings* UF5PlayerFactorySettings::GetDefaultObj()
{
	static class UF5PlayerFactorySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UF5PlayerFactorySettings*>(UF5PlayerFactorySettings::StaticClass()->DefaultObject);

	return Default;
}

}


