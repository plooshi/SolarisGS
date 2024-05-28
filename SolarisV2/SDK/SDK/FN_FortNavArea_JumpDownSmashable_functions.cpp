#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortNavArea_JumpDownSmashable.FortNavArea_JumpDownSmashable_C
// (None)

class UClass* UFortNavArea_JumpDownSmashable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_JumpDownSmashable_C");

	return Clss;
}


// FortNavArea_JumpDownSmashable_C FortNavArea_JumpDownSmashable.Default__FortNavArea_JumpDownSmashable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortNavArea_JumpDownSmashable_C* UFortNavArea_JumpDownSmashable_C::GetDefaultObj()
{
	static class UFortNavArea_JumpDownSmashable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_JumpDownSmashable_C*>(UFortNavArea_JumpDownSmashable_C::StaticClass()->DefaultObject);

	return Default;
}

}


