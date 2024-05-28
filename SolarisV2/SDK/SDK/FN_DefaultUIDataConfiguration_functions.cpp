#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultUIDataConfiguration.DefaultUIDataConfiguration_C
// (None)

class UClass* UDefaultUIDataConfiguration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultUIDataConfiguration_C");

	return Clss;
}


// DefaultUIDataConfiguration_C DefaultUIDataConfiguration.Default__DefaultUIDataConfiguration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultUIDataConfiguration_C* UDefaultUIDataConfiguration_C::GetDefaultObj()
{
	static class UDefaultUIDataConfiguration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultUIDataConfiguration_C*>(UDefaultUIDataConfiguration_C::StaticClass()->DefaultObject);

	return Default;
}

}


