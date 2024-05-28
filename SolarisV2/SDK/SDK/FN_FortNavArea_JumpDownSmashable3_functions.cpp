#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortNavArea_JumpDownSmashable3.FortNavArea_JumpDownSmashable3_C
// (None)

class UClass* UFortNavArea_JumpDownSmashable3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_JumpDownSmashable3_C");

	return Clss;
}


// FortNavArea_JumpDownSmashable3_C FortNavArea_JumpDownSmashable3.Default__FortNavArea_JumpDownSmashable3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortNavArea_JumpDownSmashable3_C* UFortNavArea_JumpDownSmashable3_C::GetDefaultObj()
{
	static class UFortNavArea_JumpDownSmashable3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_JumpDownSmashable3_C*>(UFortNavArea_JumpDownSmashable3_C::StaticClass()->DefaultObject);

	return Default;
}

}


