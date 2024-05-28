#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chalkboard_01.Chalkboard_01_C
// (Actor)

class UClass* AChalkboard_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chalkboard_01_C");

	return Clss;
}


// Chalkboard_01_C Chalkboard_01.Default__Chalkboard_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChalkboard_01_C* AChalkboard_01_C::GetDefaultObj()
{
	static class AChalkboard_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChalkboard_01_C*>(AChalkboard_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


