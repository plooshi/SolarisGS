#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IND_DamControl_03.IND_DamControl_03_C
// (Actor)

class UClass* AIND_DamControl_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IND_DamControl_03_C");

	return Clss;
}


// IND_DamControl_03_C IND_DamControl_03.Default__IND_DamControl_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIND_DamControl_03_C* AIND_DamControl_03_C::GetDefaultObj()
{
	static class AIND_DamControl_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIND_DamControl_03_C*>(AIND_DamControl_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


