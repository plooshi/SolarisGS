#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C
// (None)

class UClass* UFortNavArea_JumpDownSmashable2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_JumpDownSmashable2_C");

	return Clss;
}


// FortNavArea_JumpDownSmashable2_C FortNavArea_JumpDownSmashable2.Default__FortNavArea_JumpDownSmashable2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortNavArea_JumpDownSmashable2_C* UFortNavArea_JumpDownSmashable2_C::GetDefaultObj()
{
	static class UFortNavArea_JumpDownSmashable2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_JumpDownSmashable2_C*>(UFortNavArea_JumpDownSmashable2_C::StaticClass()->DefaultObject);

	return Default;
}

}


