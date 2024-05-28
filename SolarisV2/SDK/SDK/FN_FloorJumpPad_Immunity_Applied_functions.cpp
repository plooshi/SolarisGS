#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FloorJumpPad_Immunity_Applied.FloorJumpPad_Immunity_Applied_C
// (None)

class UClass* UFloorJumpPad_Immunity_Applied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloorJumpPad_Immunity_Applied_C");

	return Clss;
}


// FloorJumpPad_Immunity_Applied_C FloorJumpPad_Immunity_Applied.Default__FloorJumpPad_Immunity_Applied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFloorJumpPad_Immunity_Applied_C* UFloorJumpPad_Immunity_Applied_C::GetDefaultObj()
{
	static class UFloorJumpPad_Immunity_Applied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloorJumpPad_Immunity_Applied_C*>(UFloorJumpPad_Immunity_Applied_C::StaticClass()->DefaultObject);

	return Default;
}

}


