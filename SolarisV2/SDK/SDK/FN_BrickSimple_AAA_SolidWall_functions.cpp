#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BrickSimple_AAA_SolidWall.BrickSimple_AAA_SolidWall_C
// (Actor)

class UClass* ABrickSimple_AAA_SolidWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrickSimple_AAA_SolidWall_C");

	return Clss;
}


// BrickSimple_AAA_SolidWall_C BrickSimple_AAA_SolidWall.Default__BrickSimple_AAA_SolidWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABrickSimple_AAA_SolidWall_C* ABrickSimple_AAA_SolidWall_C::GetDefaultObj()
{
	static class ABrickSimple_AAA_SolidWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABrickSimple_AAA_SolidWall_C*>(ABrickSimple_AAA_SolidWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


