#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BrickSimple_Archway03.BrickSimple_Archway03_C
// (Actor)

class UClass* ABrickSimple_Archway03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrickSimple_Archway03_C");

	return Clss;
}


// BrickSimple_Archway03_C BrickSimple_Archway03.Default__BrickSimple_Archway03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABrickSimple_Archway03_C* ABrickSimple_Archway03_C::GetDefaultObj()
{
	static class ABrickSimple_Archway03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABrickSimple_Archway03_C*>(ABrickSimple_Archway03_C::StaticClass()->DefaultObject);

	return Default;
}

}


