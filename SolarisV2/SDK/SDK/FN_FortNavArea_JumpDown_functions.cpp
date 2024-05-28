#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortNavArea_JumpDown.FortNavArea_JumpDown_C
// (None)

class UClass* UFortNavArea_JumpDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_JumpDown_C");

	return Clss;
}


// FortNavArea_JumpDown_C FortNavArea_JumpDown.Default__FortNavArea_JumpDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortNavArea_JumpDown_C* UFortNavArea_JumpDown_C::GetDefaultObj()
{
	static class UFortNavArea_JumpDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_JumpDown_C*>(UFortNavArea_JumpDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


