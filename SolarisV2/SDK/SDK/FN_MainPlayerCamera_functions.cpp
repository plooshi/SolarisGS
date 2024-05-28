#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainPlayerCamera.MainPlayerCamera_C
// (Actor)

class UClass* AMainPlayerCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainPlayerCamera_C");

	return Clss;
}


// MainPlayerCamera_C MainPlayerCamera.Default__MainPlayerCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainPlayerCamera_C* AMainPlayerCamera_C::GetDefaultObj()
{
	static class AMainPlayerCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainPlayerCamera_C*>(AMainPlayerCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


