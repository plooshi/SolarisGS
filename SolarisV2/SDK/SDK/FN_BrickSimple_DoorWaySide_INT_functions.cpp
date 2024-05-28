#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BrickSimple_DoorWaySide_INT.BrickSimple_DoorWaySide_INT_C
// (Actor)

class UClass* ABrickSimple_DoorWaySide_INT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrickSimple_DoorWaySide_INT_C");

	return Clss;
}


// BrickSimple_DoorWaySide_INT_C BrickSimple_DoorWaySide_INT.Default__BrickSimple_DoorWaySide_INT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABrickSimple_DoorWaySide_INT_C* ABrickSimple_DoorWaySide_INT_C::GetDefaultObj()
{
	static class ABrickSimple_DoorWaySide_INT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABrickSimple_DoorWaySide_INT_C*>(ABrickSimple_DoorWaySide_INT_C::StaticClass()->DefaultObject);

	return Default;
}

}


