#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IND_DamControl_04.IND_DamControl_04_C
// (Actor)

class UClass* AIND_DamControl_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IND_DamControl_04_C");

	return Clss;
}


// IND_DamControl_04_C IND_DamControl_04.Default__IND_DamControl_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIND_DamControl_04_C* AIND_DamControl_04_C::GetDefaultObj()
{
	static class AIND_DamControl_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIND_DamControl_04_C*>(AIND_DamControl_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


